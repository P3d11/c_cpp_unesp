#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[10], str2[10];
    strcpy(str, "sm");
    strcpy(str2, "t");
    strcat(str, str2);

    printf("%s\n", str);

    return 0;
}
