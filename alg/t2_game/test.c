#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
	srand(time(NULL));

    while(1){
        char name_sound[104] = "ktX.wav";
        name_sound[2] = rand()%5 + '0';

        puts(name_sound);
    }


	return 0;
}