#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define MAX 4444
#define ENTER 13
#define UP 72
#define DOWN 80

void rand_sleep(int min, int max) {
    int aux = (rand()%(max-min))+min;
    Sleep(aux);
}

void printf_text(char text[4444], int anim) { 
    int aux = strlen(text) - 1;
	float time = 25;

    if(anim) {
        int len_word = 0;
        int c_at = 0;

        for(int j = 0; j < aux; j++){
            len_word++;
            if(text[j] == ' ') {
                break;
            }
        }
        
        for(int i = 0; i < aux; i++){	
            printf("%c", text[i]);
            c_at++;
            
            if(text[i] == ' ') {
                len_word = 0;
                c_at = 0;
                for(int j = i+1; j < aux; j++){
                    len_word++;
                    if(text[j] == ' ') {
                        break;
                    }
                }
                time = 25;
            }
            
            if (text[i] == '\n'){
                PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
                printf("    ");
                rand_sleep(1000, 1500);
            } else if(i > aux*0.9){
                if(text[i] == ' '){
                    PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
                    rand_sleep(250, 500);
                } else {
                    if(c_at <= len_word/2){
                        time *= (6./len_word + 1);
                    } else {
                        time /= (6./len_word + 1);
                    }
                    char name_sound[104] = "sound/ktX.wav";
                    name_sound[8] = rand()%7 + '0';

                    PlaySound(name_sound, NULL, SND_FILENAME | SND_ASYNC);
                    rand_sleep((int) (time*0.75), (int) (time*0.75*1.25));
                }
            }		
        }
    } else {
        for(int i = 0; i < aux; i++){	
            printf("%c", text[i]);
            
            if (text[i] == '\n'){
                printf("    ");
                rand_sleep(50, 100);
            }
        }
    }

    printf("\n");
}

int read_input(){

    int aux = getch();

    if(aux <= 0 || aux == 224){
        aux = getch();

        if(aux == UP){
            return 1;
        }

        if(aux == DOWN){
            return 2;
        }
    }

    if(aux == ENTER){
        return 3;
    }

    return -1;
}

int choice_point(char text[MAX], int how_many, char opt[10][MAX]) {
    int position = 0;
    
    int aux_input_start = 0;
    while(aux_input_start < 1 || aux_input_start > 3){
        aux_input_start = read_input();
    }

    if(aux_input_start == 3) {
        return position;
    }

    if(aux_input_start == 2) {
        position++;
    }

    while(1) {
        system("cls");

        rand_sleep(100, 200);

        printf_text(text, 0);
        for(int i = 0; i < how_many; i++){
            if(position == i){
                printf("      > ");
            } else {
                printf("        ");
            }
            printf_text(opt[i], 0);
        }

        int aux_input = 0;
        while(aux_input < 1 || aux_input > 3){
            aux_input = read_input();
        }

        if(aux_input == 3){
            return position;
        }

        if(aux_input == 1 && position != 0){
            position--;
        } else if(aux_input == 2 && position != how_many-1) {
            position++;
        }
    }
}

void tzero(int choices[5]) {
    char date[MAX] = "11/09/92\n";
    char text[MAX] = "\nOkay... Oi. Meu nome eh Raphael Santos. Eu tenho 25 anos e trabalho como detetive na cidade de Piratininga ha mais ou menos 4 meses. Nas ultimas semanas, eu e meu mentor, detetive Carlos Almeida, temos investigado casos de desaparecimentos suspeitos na cidade... e acho que ele acabou de se tornar uma das vitimas.\nOntem recebi uma mensagem de voz dele. Nunca o vira daquela maneira: confuso, ansioso, com medo. Ele disse coisas que nao sei se compreendo completamente, mas preciso tentar. Comecei essa serie de entradas para deixar minhas descobertas registradas e ver se consigo decifrar o que esta por tras de tudo isso.\n\nNo momento, acho que tenho duas escolhas: \0";

    char opt[2][MAX] = {"Investigar por conta propria ",
                        "Ir a policia e mostrar a mensagem de voz "};

    printf_text(date, 1);
    printf_text(text, 1);

    printf("      > ");
    printf_text(opt[0], 1);

    printf("        ");
    printf_text(opt[1], 1);

    strcat(date, text);

    int ansr = choice_point(date, 2, opt);
    
    system("cls");

    if(ansr == 0) {
        printf("vc escolheu a pimeira opcao");
    } else {
        printf("vc escoeu a seguda opt");
    }
}

void init_computer(int choices[5]) {
    system("cls");

    PlaySound("sound/start_pc.wav", NULL, SND_FILENAME | SND_ASYNC);

    printf("\tLG G3, An Energy Star Ally.\n");
    Sleep(300);
    printf("\tCopyright (C) 1958-1992, LG Eletronics Inc.\n");
    Sleep(650);
    printf("\nKrait 400 CPU at 2500 MHz , 4 Processor(s)\n");
    Sleep(300);
    printf("Memory Test : ");
    Sleep(300);

    for(int i = 0; i < 1048576; i+=131072){
        system("cls");
        printf("\tLG G3, An Energy Star Ally.\n");
        printf("\tCopyright (C) 1958-1992, LG Eletronics Inc.\n");
        printf("\nKrait 400 CPU at 2500 MHz , 4 Processor(s)\n");
        printf("Memory Test : %7dK", i);
        Sleep(75);
    }

    printf(" 0K\n");
    Sleep(1000);

    printf("\nAndroid Plug and Play ROM Extension v5.0.2\n");
    Sleep(300);

    printf("Copyright (C) 2015, Google Inc.\n");
    Sleep(300);

    printf("\tDetecting Flash ROM       ");
    for(int i = 0; i < 3; i++){
        Sleep(150);
        printf(".");
    }
    Sleep(300);
    printf(" CyanogenMod 12\n");
    Sleep(300);

    printf("\tDetecting Flash Extension ");
    for(int i = 0; i < 3; i++){
        Sleep(150);
        printf(".");
    }
    Sleep(300);
    printf(" Generic microSD\n");
    Sleep(300);
    
    printf("\tDetecting Phone Storage   ");
    for(int i = 0; i < 3; i++){
        Sleep(150);
        printf(".");
    }
    Sleep(300);
    printf(" Generic SIM Card\n");
    Sleep(150);

    system("cls");

    Sleep(1000);

    printf("Initialization finished");
    for(int i = 0; i < 7; i++){
        Sleep(200);
        printf(".");
    }
    Sleep(750);
    
    for(int i = 0; i < 4; i++){
        system("cls");
        printf("Activating root access ");
        printf("\\");
        Sleep(100);

        system("cls");
        printf("Activating root access ");
        printf("|");
        Sleep(100);

        system("cls");
        printf("Activating root access ");
        printf("/");
        Sleep(100);

        system("cls");
        printf("Activating root access ");
        printf("-");
        Sleep(100);
    }

    Sleep(500);

    system("cls");
    
    Sleep(1000);

    tzero(choices);
}


void start(int choices[5]) {

    init_computer(choices);
}

int main() {
    srand(time(NULL));

    int choices[5] = {-1, -1, -1, -1, -1};
    
    start(choices);

    //printf_text("Lorem ipsum dolor sit amet.\nAut consequatur iste aut necessitatibus cupiditate est vero itaque ut sunt adipisci et adipisci veritatis et quibusdam incidunt. Sed iste atque sed perspiciatis voluptatem et sint autem quo molestias assumenda? Ab dolores animi est natus officiis cum quia aliquam aut expedita omnis est repellat magni cum fugiat explicabo. Aut molestias illum et provident omnis sed similique nemo aut facilis voluptatibus vel adipisci dolor hic nostrum labore et eligendi ipsum? Qui nihil mollitia est beatae totam sit aliquam provident.");

    getch();

    return 0;
}
