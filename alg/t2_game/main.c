#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define MAX 4444

void rand_sleep(int min, int max) {
    int aux = (rand()%(max-min))+min;
    Sleep(aux);
}

void printf_text(char text[4444]) { 
    int aux = strlen(text) - 1;
	float time = 25;
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
			//PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
			rand_sleep(2000, 3000);
		} else if(i > aux*0.9){
            if(text[i] == ' '){
                //PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
                rand_sleep(250, 500);
            } else {
                if(c_at <= len_word/2){
                    time *= (6./len_word + 1);
                } else {
                    time /= (6./len_word + 1);
                }
                char name_sound[104] = "sound/ktX.wav";
                name_sound[8] = rand()%7 + '0';

                //PlaySound(name_sound, NULL, SND_FILENAME | SND_ASYNC);
                rand_sleep((int) (time*0.75), (int) (time*0.75*1.25));
            }
        }		
    }

    printf("\n");
}

int choice_point(char text[MAX], int how_many, char choices[10][MAX]) {
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

int text_zero(int choices[5]){
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

    Sleep(300);

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

    system("cls");
    
}


void start(int choices[5]) {

    text_zero(choices);
}

int main() {
    srand(time(NULL));

    int choices[5] = {-1, -1, -1, -1, -1};
    
    start(choices);

    //printf_text("Lorem ipsum dolor sit amet.\nAut consequatur iste aut necessitatibus cupiditate est vero itaque ut sunt adipisci et adipisci veritatis et quibusdam incidunt. Sed iste atque sed perspiciatis voluptatem et sint autem quo molestias assumenda? Ab dolores animi est natus officiis cum quia aliquam aut expedita omnis est repellat magni cum fugiat explicabo. Aut molestias illum et provident omnis sed similique nemo aut facilis voluptatibus vel adipisci dolor hic nostrum labore et eligendi ipsum? Qui nihil mollitia est beatae totam sit aliquam provident.");

    getch();

    return 0;
}
