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
        printf("%d ", aux);

        if(aux <= 0 || aux == 224){
            aux = getch();
            printf("%d\n", aux);

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

void printf_mat(int lines, int cols, int mat[MAX][MAX], int l, int c){
    Sleep(100-((lines+cols)*2));

    printf("     ");

    for(int j = 0; j < cols; j++){
        printf("%3d. ", j+1);
    }

    printf("\n");

    for (int i = 1; i <= lines; i++){
        Sleep(45-(lines+cols));
        for(int j = 0; j <= cols; j++){
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

        if(opt[0]){
            printf("> Sim\n");
        } else {
            printf("  Sim\n");
        }

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
        Sleep(300);
    }

    return decision;
}

void write_random_mat(int lines, int cols, int mat[MAX][MAX]){
    for (int i = 0; i < lines; i++){
        for(int j = 0; j < cols; j++){
            system("cls");
            printf_mat(lines, cols, mat, i, j);

            int aux_rand = (rand()%1000 - rand()%1000);
            printf("Valor em %dx%d: ", i+1, j+1);
            printf("%d", aux_rand);

            mat[i][j] = aux_rand;

            Sleep(300);
        }
    }

    return;
}

void write_mat(int lines, int cols, int mat[MAX][MAX]){
    for (int i = 0; i < lines; i++){
        for(int j = 0; j < cols; j++){
            system("cls");
            printf_mat(lines, cols, mat, i, j);

            int aux = 0;
            printf("Valor em %dx%d: ", i+1, j+1);
            scanf("%d", &aux);

            while(((float)aux/1000 >= 1) || ((float)aux/1000 <= -1)){
                system("cls");

                printf_mat(lines, cols, mat, i, j);

                printf("Valor (entre -1000 e 1000) em %dx%d: ", i+1, j+1);
                scanf("%d", &aux);
            }

            mat[i][j] = aux;
        }
    }

    return;
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL,"Portuguese");

    //start();

    int lines = -1, cols = -1, mat[MAX][MAX];

    Sleep(1200);

    printf("Insira a quantidade de LINHAS: ");
    scanf("%d", &lines);
    while (lines <= 0 || lines > 22) {
        system("cls");
        printf("Insira a quantidade de LINHAS (de 1 a 22): ");

        scanf("%d", &lines);
    }  

    system("cls");

    Sleep(1200);

    printf("Insira a quantidade de COLUNAS: ");
    scanf("%d", &cols);
    while (cols <= 0 || cols > 22) {
        system("cls");
        printf("Insira a quantidade de COLUNAS (de 1 a 22): ");

        scanf("%d", &cols);
    }  

    system("cls");

    Sleep(300);

    for(int i = 0; i < 2; i++){
        printf("Processando");
        Sleep(300);
        for(int j = 0; j < 3; j++){
            printf(".");
            Sleep(300);
        }
        system("cls");
    }


    if (c_random() == 0) {
        write_random_mat(lines, cols, mat);
    } else {
        write_mat(lines, cols, mat);
    }

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", mat[i][j]);
        }
    }   

    system("cls");
    printf_mat(lines, cols, mat, -1, -1);

    return 0;
}
