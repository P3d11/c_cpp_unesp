#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define MAX_MAT 104
#define MAX 4444

void rand_sleep(int min, int max) {
    int aux = (rand()%(max-min))+min;
    Sleep(aux);
}

void printf_text(char text[MAX], int end) { 
    int aux = strlen(text) - 1;

    for(int i = 0; i < aux; i++){
        printf("%c", text[i]);
        rand_sleep(10, 50);
    }

    printf("\n");
}

int choice_point(char text[MAX], int how_many, char choices[MAX_MAT][MAX]) {
    int opt[MAX];
    for(int i = 0; i < how_many; i++){
        opt[i] = 0;
    }
    opt[0] = 1;

    int decision = -1, aux_opt = 0;

    while(decision != -1){
        system("cls");
        
    }
}

/* int pass_text() {

} */

int main() {
    srand(time(NULL));

    char choices[MAX_MAT][MAX];

    gets(choices[0]);
    //gets(choices[1]);

    printf_text(choices[0], 0);


    return 0;
}
