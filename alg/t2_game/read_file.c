#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE *ptr = fopen("C:\\Users\\peema\\OneDrive\\Documents\\code\\c_cpp\\alg\\t2_game\\text\\file.txt", "r");
 
    char str[10];

    if (ptr == NULL) {
        printf("file can't be opened \n");
        return 1;
    }
 
    printf("content of this file are \n");
 
    while (fgets(str, 10, ptr)) {
        printf("%s", str);
    }
 
    printf("\nend");

    fclose(ptr);
    return 0;
}