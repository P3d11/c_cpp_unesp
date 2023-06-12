#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include <time.h>

void anim_load(int variant){
    int how_many = 3;//rand()%4 + 1;

    system("cls");

    if(variant == 0){
        for(int i = 0; i < how_many; i++){
            printf("Processando");
            Sleep(300);
            for(int j = 0; j < 3; j++){
                if(j == 1){
                    printf(".");
                    Sleep(400);
                } else {
                    printf(".");
                    Sleep(100);
                }
            }
            system("cls");
        }
    } else if(variant == 1){
        printf("Proc");

        Sleep(300);

        system("cls");

        for(int i = 0; i < how_many; i++){
            printf("Processando");
            Sleep(300);
            for(int j = 0; j < 3; j++){
                printf(".");
                Sleep(300);
            }
            system("cls");
        }
    } else if(variant == 2){
        printf("Proc");

        Sleep(300);

        for(int i = 0; i < how_many; i++){
            system("cls");

            printf("Processando -");
            Sleep(100);            
            system("cls");
            
            printf("Processando \\");
            Sleep(100);            
            system("cls");
                        
            printf("Processando |");
            Sleep(100);            
            system("cls");

            printf("Processando /");
            Sleep(100);            
            system("cls");
        }
    } else if(variant == 3){
        for(int i = 0; i < how_many; i++){
            system("cls");

            printf("Processando -");
            Sleep(100);            
            system("cls");
            
            printf("Processando \\");
            Sleep(100);            
            system("cls");
                        
            printf("Processando |");
            Sleep(100);            
            system("cls");

            printf("Processando /");
            Sleep(100);            
            system("cls");
        }
    } else if(variant == 4){
        for(int i = 0; i < how_many+2; i++){
            system("cls");

            printf("-");
            Sleep(100);            
            system("cls");
            
            printf("\\");
            Sleep(100);            
            system("cls");
                        
            printf("|");
            Sleep(100);            
            system("cls");

            printf("/");
            Sleep(100);            
            system("cls");
        }
    } else if(variant == 5){
        printf("Load");

        Sleep(300);

        system("cls");

        for(int i = 0; i < how_many; i++){
            printf("Loading");
            Sleep(300);
            for(int j = 0; j < 3; j++){
                printf(".");
                Sleep(300);
            }
            system("cls");
        }
    } else if(variant == 6){
        for(int i = 0; i < how_many; i++){
            printf("Procesando\n");
            for(int j = 0; j < 10; j++){
                printf("#");
                Sleep(50);
            }
            system("cls");
        }
    } else if(variant == 7){
        for(int i = 0; i < how_many; i++){
            for(int j = 0; j < 10; j++){
                printf("#");
                Sleep(100);
            }
            system("cls");
        }
    } else if(variant == 8){
        how_many = how_many/2;
        if(how_many == 0){
            how_many = 1;
        }
        for(int i = 0; i < how_many; i++){
            printf("__________");
            Sleep(250);
            system("cls");

            printf("#_________");
            Sleep(250);
            system("cls");

            printf("##________");
            Sleep(250);
            system("cls");

            printf("###_______");
            Sleep(250);
            system("cls");
            
            printf("####______");
            Sleep(250);
            system("cls");

            printf("#####_____");
            Sleep(250);
            system("cls");

            printf("######____");
            Sleep(250);
            system("cls");

            printf("#######___");
            Sleep(250);
            system("cls");

            printf("########__");
            Sleep(250);
            system("cls");

            printf("#########_");
            Sleep(250);
            system("cls");

            printf("##########");
            Sleep(1000);

            if (how_many > 1 && i == 0){
                system("cls");
                printf("error\n");
                Sleep(2000);
                printf("trying to");
                Sleep(750);
                system("cls");
                printf("error\n");
                printf("trying to reload");
                for(int j = 0; j<3; j++){
                    printf(".");
                    Sleep(300);
                }
                Sleep(200);
                printf(".");
                Sleep(200);
                system("cls");
            }
        }
    } else {
        Sleep(2000);
        system("cls");
    }

    system("cls");
}


int main() {
    srand(time(NULL));
    for (int aa = 0; aa < 10; aa++){
        printf("Anim %d", aa);
        Sleep(2000);
        system("cls");
        anim_load(aa);
    }

    return 0;
}
