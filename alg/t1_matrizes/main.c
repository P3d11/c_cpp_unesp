#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include <time.h>

#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define HELP 59
#define C_TIME 10
#define MINI_ANIM_TIME 100
#define ANIM_TIME 300
#define MAX 24

void cred(){
    system("cls");

    Sleep(ANIM_TIME);

    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|-\n");
    printf("|\n");
    printf("|-\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);

    system("cls");

    printf("|\n");
    printf("|- B\n");
    printf("|\n");
    printf("|- P\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Br\n");
    printf("|\n");
    printf("|- Pe\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bru\n");
    printf("|\n");
    printf("|- Ped\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Brun\n");
    printf("|\n");
    printf("|- Pedr\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno\n");
    printf("|\n");
    printf("|- Pedro\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno R\n");
    printf("|\n");
    printf("|- Pedro R\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ra\n");
    printf("|\n");
    printf("|- Pedro Ri\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ram\n");
    printf("|\n");
    printf("|- Pedro Ric\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Rama\n");
    printf("|\n");
    printf("|- Pedro Rici\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramal\n");
    printf("|\n");
    printf("|- Pedro Ricie\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalh\n");
    printf("|\n");
    printf("|- Pedro Ricier\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho\n");
    printf("|\n");
    printf("|- Pedro Ricieri\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho N\n");
    printf("|\n");
    printf("|- Pedro Ricieri M\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Na\n");
    printf("|\n");
    printf("|- Pedro Ricieri Ma\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nas\n");
    printf("|\n");
    printf("|- Pedro Ricieri Mar\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nasc\n");
    printf("|\n");
    printf("|- Pedro Ricieri Marc\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nasci\n");
    printf("|\n");
    printf("|- Pedro Ricieri March\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nascim\n");
    printf("|\n");
    printf("|- Pedro Ricieri Marchi\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nascime\n");
    printf("|\n");
    printf("|- Pedro Ricieri Marchi\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nascimen\n");
    printf("|\n");
    printf("|- Pedro Ricieri Marchi\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nasciment\n");
    printf("|\n");
    printf("|- Pedro Ricieri Marchi\n");
    printf("|\n");

    Sleep(MINI_ANIM_TIME);


    system("cls");

    printf("|\n");
    printf("|- Bruno Ramalho Nascimento\n");
    printf("|\n");
    printf("|- Pedro Ricieri Marchi\n");
    printf("|\n\n");

    Sleep(MINI_ANIM_TIME);

    exit(0);
}

void help_scr(){
    printf("\n___________AJUDA___________");
    Sleep(ANIM_TIME);
    printf("\nseta_para_cima  |     Subir");
    Sleep(ANIM_TIME);
    printf("\nseta_para_baixo |    Descer");
    Sleep(ANIM_TIME);
    printf("\n<enter>         | Confirmar");
    Sleep(ANIM_TIME);
    printf("\n<f1>            |     Ajuda");
    Sleep(ANIM_TIME);
    printf("\n<esc>           |      Sair");
    Sleep(ANIM_TIME);
    Sleep(ANIM_TIME);
    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    getch();
}

int read_input(){
    while (1) {
        int aux = getch();

        if(aux <= 0 || aux == 224){
            aux = getch();

            if(aux == HELP){
                system("cls");

                Sleep(ANIM_TIME);

                help_scr();

                return 4;
            }

            if(aux == UP){
                return 1;
            }

            if(aux == DOWN){
                return 2;
            }
        }

        if(aux == ESC){
            cred();
        }

        if(aux == ENTER){
            return 3;
        }
    }
}

void anim_load(){
    int variant = rand()%10;
    int how_many = rand()%3 + 1;

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
        if(how_many <= 2){
            how_many = 1;
        } else {
            how_many = 2;
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

void start(){

    printf("Iniciando Ap");
    Sleep(400);
    printf("licacao\n");
    Sleep(1000);
    
    anim_load();

    Sleep(1000);

    printf("-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-\n");

    Sleep(1000);
    system("cls");
    Sleep(500);


    printf("-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-\n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("|                \n");
    printf("-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-\n");
    printf("|                  \n");
    printf("|                  \n");
    printf("|                  \n");
    printf("|                  \n");
    printf("-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                    \n");
    printf("|                    \n");
    printf("|                    \n");
    printf("|                    \n");
    printf("-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       \n");
    printf("|                       \n");
    printf("|                       \n");
    printf("|                       \n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");

    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      A                |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Al               |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Alg              |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algo             |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algor            |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algori           |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algorit          |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritm         |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmo        |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos       |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|                       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1               |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 T             |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Tr            |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Tra           |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Trab          |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Traba         |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Trabal        |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Trabalh       |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    Sleep(MINI_ANIM_TIME);
    system("cls");


    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Trabalho      |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");
    read_input();

    system("cls");

    printf("|                       |\n");
    printf("|      Algoritmos I     |\n");
    printf("|       1 Trabalho      |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    printf("|      Algoritmos I     |\n");
    printf("|       1 Trabalho      |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);
    

    system("cls");

    printf("|       1 Trabalho      |\n");
    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    printf("|                       |\n");
    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    printf("-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    printf("\n(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    printf("(Aperte qualquer tecla para continuar...)\n\n");

    Sleep(ANIM_TIME);


    system("cls");

    Sleep(ANIM_TIME);
}

void printf_mat(int order[2], int mat[MAX][MAX], int l, int c){
    Sleep(100-((order[0]+order[1])*2));

    printf("     ");

    for(int j = 0; j < order[1]; j++){
        printf("%3d. ", j+1);
    }

    printf("\n");

    for (int i = 1; i <= order[0]; i++){
        Sleep(45-(order[0]+order[1]));
        for(int j = 0; j <= order[1]; j++){
            if(j == 0){
                printf("%3d. ", i);
            } else {
                if(l != -1 && c != -1){
                    if(i-1 == l && j-1 == c){
                        printf(" ___ ");
                    } else {
                        if (i-1 < l) {
                            printf("%4d ", mat[i-1][j-1]); 
                        } else if (i-1 == l){
                            if (j-1 < c){
                                printf("%4d ", mat[i-1][j-1]); 
                            } else {
                                printf("     ");
                            }
                        } else {
                            printf("     ");
                        }
                    } 
                } else {
                    printf("%4d ", mat[i-1][j-1]);
                }
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

int c_random(){
    printf("Preencher com ");
    Sleep(300);
    system("cls");
    
    int decision = -1, opt[2] = {1, 0}, aux_opt = 0;
    while(decision == -1){
        printf("Preencher com valores aleatorios?\n");
        Sleep(150);

        if(opt[0]){
            printf("> Sim\n");
        } else {
            printf("  Sim\n");
        }

        Sleep(75);

        if(opt[1]){
            printf("> Nao\n");
        } else {
            printf("  Nao\n");
        }

        int aux_input = read_input();

        if (aux_input == 1 && aux_opt != 0){
            opt[aux_opt] = 0;
            aux_opt--;
            opt[aux_opt] = 1;
        } else if (aux_input == 2 && aux_opt != 1){
            opt[aux_opt] = 0;
            aux_opt++;
            opt[aux_opt] = 1;
        } else if (aux_input == 3) {
            decision = aux_opt;
        }

        system("cls");
        Sleep(200);
    }

    return decision;
}

void write_random_mat(int order[2], int mat[MAX][MAX]){
    for (int i = 0; i < order[0]; i++){
        for(int j = 0; j < order[1]; j++){
            system("cls");
            printf_mat(order, mat, i, j);

            int aux_rand = (rand()%1000 - rand()%1000);
            printf("Valor em %dx%d: ", i+1, j+1);
            printf("%d", aux_rand);

            mat[i][j] = aux_rand;

            int time = (int) ((order[0]*order[1])*0.69);

            Sleep(350-time);
        }
    }

    return;
}

void write_mat(int order[2], int mat[MAX][MAX]){
    for (int i = 0; i < order[0]; i++){
        for(int j = 0; j < order[1]; j++){
            system("cls");
            printf_mat(order, mat, i, j);

            int aux = 0;
            printf("Valor em %dx%d: ", i+1, j+1);
            scanf("%d", &aux);

            while(((float)aux/1000 >= 1) || ((float)aux/1000 <= -1)){
                system("cls");

                printf_mat(order, mat, i, j);

                printf("Valor (entre -1000 e 1000) em %dx%d: ", i+1, j+1);
                scanf("%d", &aux);
            }

            mat[i][j] = aux;
        }
    }

    return;
}

void change_mat(int order[2], int mat[MAX][MAX]){
    Sleep(1200);

    printf("Insira a quantidade de LINHAS: ");
    scanf("%d", &order[0]);
    while (order[0] <= 0 || order[0] > 22) {
        system("cls");
        printf("Insira a quantidade de LINHAS (de 1 a 22): ");

        scanf("%d", &order[0]);
    }  

    system("cls");

    Sleep(1200);

    printf("Insira a quantidade de ");
    Sleep(500);
    printf("COLUNAS: ");
    scanf("%d", &order[1]);
    while (order[1] <= 0 || order[1] > 22) {
        system("cls");
        printf("Insira a quantidade de COLUNAS (de 1 a 22): ");

        scanf("%d", &order[1]);
    }  

    anim_load();

    if (c_random() == 0) {
        write_random_mat(order, mat);
    } else {
        write_mat(order, mat);
    }

    system("cls");
    printf("Sua");
    Sleep(100);
    printf(" MATRIZ:\n\n");
    printf_mat(order, mat, -1, -1);
    Sleep(125);
    printf("(Aperte qualquer tecla para continuar...)\n\n");
    read_input();
}

int c_main(){
    int variant = rand()%3;
    Sleep(300);
    system("cls");

    if(variant == 0){
        printf("ione o que des");
    } else if(variant == 1){
        printf("Selecione o q");
    } else {
        printf("que deseja fazer:");
    } 

    Sleep(300);
    system("cls");

    int decision = -1, opt[9] = {1, 0, 0, 0, 0, 0, 0, 0, 0}, aux_opt = 0;
    while(decision == -1){
        printf("Selecione o que deseja fazer:\n");
        Sleep(150);

        if(opt[0]){
            printf("> redefinir matriz\n");
        } else {
            printf("  redefinir matriz\n");
        }

        Sleep(C_TIME);

        if(opt[1]){
            printf("> mostrar matriz\n");
        } else {
            printf("  mostrar matriz\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[2]){
            printf("> trocar linha X pela linha Y\n");
        } else {
            printf("  trocar linha X pela linha Y\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[3]){
            printf("> trocar coluna X pela coluna Y\n");
        } else {
            printf("  trocar coluna X pela coluna Y\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[4]){
            printf("> trocar diag. principal pela diag. secundaria\n");
        } else {
            printf("  trocar diag. principal pela diag. secundaria\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[5]){
            printf("> verificar simetria\n");
        } else {
            printf("  verificar simetria\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[6]){
            printf("> verificar quadrado magico\n");
        } else {
            printf("  verificar quadrado magico\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[7]){
            printf("> verificar quadrado latino\n");
        } else {
            printf("  verificar quadrado latino\n");
        }

        Sleep(C_TIME*(rand()%8+1));

        if(opt[8]){
            printf("> verificar permutacao\n");
        } else {
            printf("  verificar permutacao\n");
        }

        int aux_input = read_input();

        if (aux_input == 1 && aux_opt != 0){
            opt[aux_opt] = 0;
            aux_opt--;
            opt[aux_opt] = 1;
        } else if (aux_input == 2 && aux_opt != 8){
            opt[aux_opt] = 0;
            aux_opt++;
            opt[aux_opt] = 1;
        } else if (aux_input == 3) {
            decision = aux_opt;
        }

        system("cls");
        Sleep(200);
    }

    return decision;
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    start();

    int order[2], mat[MAX][MAX];

    change_mat(order, mat);

    while(1){
        int decision = c_main(order, mat);
        switch (decision) {
            case 0:
                change_mat(order, mat);
                break;
            
            case 1:
                printf("Sua");
                Sleep(100);
                printf(" MATRIZ:\n\n");
                printf_mat(order, mat, -1, -1);
                Sleep(200);
                printf("(Aperte qualquer tecla para continuar...)\n\n");
                read_input();
                break;

            case 2:
            
                break;

            case 3:
            
                break;

            case 4:
            
                break;

            case 5:
            
                break;

            case 6:
            
                break;

            case 7:
            
                break;

            case 8:
            
                break;

            default:
                break;
        }

    }


    return 0;
}
