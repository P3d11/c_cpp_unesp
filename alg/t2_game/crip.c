#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    char word[4444];
    strcpy(word, "Ele realmente amava criptografia... ");

    for(int i = 0; i < (int) strlen(word); i++) {
        word[i]++;
    }

    puts(word);
      
    return 0;
}
