#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

#define ESC 27
#define ENTER 13
#define UP 72
#define DOWN 80
#define HELP 59
#define MINI_ANIM_TIME 100
#define ANIM_TIME 300
#define MAX 100

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
    printf("\nseta_para_cima  |     Subir");
    printf("\nseta_para_baixo |    Descer");
    printf("\n<enter>         | Confirmar");
    printf("\n<f1>            |     Ajuda");
    printf("\n<esc>           |      Sair");

    printf("\n\n(Aperte qualquer tecla para continuar...)\n\n");

    getch();
}

int read_input(){
    int aux = getch();

    if(aux <= 0){
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
        return 2;
    }

    return -1;
}

void start(){
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

int main() {
    setlocale(LC_ALL,"Portuguese");

    start();

    int lines, cols, mat[MAX][MAX];

    Sleep(1200);

    printf("Insira quantidade de LINHAS: ");
    scanf("%d", &lines);

    system("cls");


    Sleep(1200);

    printf("Insira quantidade de COLUNAS: ");
    scanf("%d", &cols);

    system("cls");


    Sleep(300);

    for(int i = 0; i < 4; i++){
        printf("Processando");
        Sleep(350);
        for(int j = 0; j < 3; j++){
            printf(".");
            Sleep(350);
        }
        system("cls");
    }

/*     int aux_l = 1, aux_c = 1, aux_t =1;

    while(aux_t){
        printf("%d - %d | %d - %d\n\n", aux_l, aux_c, lines, cols);

        for(int i = 0; i <= aux_l; i++){
            if(i == 0){
                printf("     ");
            } else {
                printf("%3d. ", i);
            }
            for(int j = 0; j <= aux_c; j++){
                if(i == 0){
                    printf("%3d. ", j);
                } else if(j != aux_c && i != aux_l) {
                    printf("%3d ", mat[i-1][j-1]);
                } else {
                    scanf("%d", &mat[i-1][j-1]);
                }
            }
            printf("\n");
        }

        aux_c++;
        if(aux_c == cols){
            if(aux_l == lines){
                aux_t = 0;
            }
            aux_c = 0;
            aux_l++;            
        }

        system("cls");
    } */

    return 0;
}
