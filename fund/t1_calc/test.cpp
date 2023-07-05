#include <iostream>
#include <string>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <math.h>

using namespace std;

string x_to_bin(string num, string base) {
    string res = "";
    if(base == "2"){
        res = res + num;
    } else if (base == "8") {
        for(unsigned int i = 0; i < num.size(); i++){
            int digit = num[i] - '0';
            string bin_digit = "000";
            for(int aux = 2; aux >= 0; aux--){
                if(digit - (int)(pow(2., aux)) >= 0){
                    digit -= (int)(pow(2., aux));
                    bin_digit[2-aux] = '1';
                }
            }
            res = res + bin_digit;
        }
    } else if (base == "10") {
        int dec_num = 0;

        for(unsigned int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            double digit_pos = pow(10.0, (double)(num.size() - 1 - i));
            dec_num += digit * (int) digit_pos;
        }

        while(dec_num != 0) {
            res = "X" + res;
            res[0] = dec_num%2 + '0';
            dec_num = dec_num/2;
        }
    } else if (base == "16") {
        for(unsigned int i = 0; i < num.size(); i++){
            int digit;
            if(num[i] >= '0' && num[i] <= '9'){
                digit = num[i] - '0';
            } else if(num[i] >= 'A' && num[i] <= 'F'){
                digit = num[i] - 'A' + 10;
            } else {
                digit = num[i] - 'a' + 10;
            }

            string bin_digit = "0000";
            for(int aux = 3; aux >= 0; aux--){
                if(digit - (int)(pow(2., aux)) >= 0){
                    digit -= (int)(pow(2., aux));
                    bin_digit[3-aux] = '1';
                }
            }
            res = res + bin_digit;
        }
    }

    return res;
}

string bin_to_x(string num, string base) {
    string res = "";
    if(base == "2"){
        res = res + num;
    } else if (base == "8") {
        while(num.size()%3 != 0){
            num = "0" + num;
        }
        for(unsigned int i = 0; i < num.size(); i+=3){
            int digit = 0;
            for(int j = 0; j < 3; j++){
                if(num[i+j] == '1'){
                    digit += (int) pow(2.0, 2.0 - j);
                }
            }
            
            res = res + to_string(digit);
        }
    } else if (base == "10") {
        int digit = 0;

        for(unsigned int i = 0; i < num.size(); i++) {
            if(num[i] == '1'){
                digit += pow(2.0, (double)(num.size() - 1 - i));
            }
        }

        res = to_string(digit);
    } else if (base == "16") {
        while(num.size()%4 != 0){
            num = "0" + num;
        }
        for(unsigned int i = 0; i < num.size(); i+=4){
            int digit = 0;
            for(int j = 0; j < 4; j++){
                if(num[i+j] == '1'){
                    digit += (int) pow(2.0, 3.0 - j);
                }
            }

            switch(digit) {
                case 10:
                    res = res + "a";
                    break;

                case 11:
                    res = res + "b";
                    break;
                
                case 12:
                    res = res + "c";
                    break;
                
                case 13:
                    res = res + "d";
                    break;
                
                case 14:
                    res = res + "e";
                    break;
                
                case 15:
                    res = res + "f";
                    break;
                
                default:
                    res = res + to_string(digit);
                    break;
            }
        }
    }

    string final_res = "";
    int start = 0;
    for(unsigned int i = 0; i < res.size(); i++){
        if(res[i] != '0' || start){
            final_res = final_res + res[i];
            start = 1;
        }
    }

    if(final_res == ""){
        final_res = "0";
    }

    return final_res;
}

int main(){
/*     string base = "2";
    string num = "101011";

    cout << "init: " << num << " | " << base << endl;
    cout << "aux: " << x_to_bin(num, base) << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "2") << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "8") << " | 8" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "10") << " | 10" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "16") << " | 16" << endl << endl;

    base = "8";
    num = "123";

    cout << "init: " << num << " | " << base << endl;
    cout << "aux: " << x_to_bin(num, base) << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "2") << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "8") << " | 8" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "10") << " | 10" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "16") << " | 16" << endl << endl;

    base = "10";
    num = "1932";

    cout << "init: " << num << " | " << base << endl;
    cout << "aux: " << x_to_bin(num, base) << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "2") << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "8") << " | 8" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "10") << " | 10" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "16") << " | 16" << endl << endl;

    base = "16";
    num = "a23F";

    cout << "init: " << num << " | " << base << endl;
    cout << "aux: " << x_to_bin(num, base) << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "2") << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "8") << " | 8" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "10") << " | 10" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "16") << " | 16" << endl << endl; */

    string base = "10";
    string num = "000000000000000000";

    cout << "init: " << num << " | " << base << endl;
    cout << "aux: " << x_to_bin(num, base) << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "2") << " | 2" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "8") << " | 8" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "10") << " | 10" << endl;
    cout << "final: " << bin_to_x(x_to_bin(num, base), "16") << " | 16" << endl << endl;
}