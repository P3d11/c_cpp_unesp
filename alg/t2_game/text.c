#include <stdio.h>

void bold(int status) {
    static const char *seq[] = {"\x1b[0m", "\x1b[1m"};
    printf("%s", seq[!!status]);
}

void italic(int status) {
    static const char *seq[] = {"\x1b[0m", "\x1b[3m"};
    printf("%s", seq[!!status]);
}


int main(void) {
    printf("one "); bold(1); printf("two "); bold(0);italic(1); printf("three\n");
    bold(1);printf("four");italic(0);printf("four");
    return 0;
}