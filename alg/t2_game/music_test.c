#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void rand_sleep(int min, int max) {
    int aux = (rand()%(max-min))+min;
    Sleep(aux);
}

void printf_text(char text[4444], int end) { 
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
		
		if(text[i] == ' '){
			PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
        	rand_sleep(250, 500);
		} else if (text[i] == '\n'){
			PlaySound("sound/space.wav", NULL, SND_FILENAME | SND_ASYNC);
			rand_sleep(500, 1000);
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

    printf("\n");
}

int main() {
	srand(time(NULL));

	PlaySound("sound/boss_run.wav", NULL, SND_FILENAME | SND_ASYNC);
	getch();
	PlaySound("sound/start_pc.wav", NULL, SND_FILENAME | SND_ASYNC);
	Sleep(5000);

	return 0;
}