#include <stdio.h>

int main(void) {
    FILE *fd1, *fd2;
    printf("O programa cria dois arquivos\n");
    fd1 = fopen("test1.txt", "w+");
    fd2 = fopen("test2.txt", "w+");
    while(1){}
    return 0;
}
