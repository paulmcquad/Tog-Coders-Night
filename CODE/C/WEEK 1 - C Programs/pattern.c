#include <stdio.h>

int x, y;

int main(int argc, char *argv[]){

    for (x = 0; x < 10; x++, printf("\n") )
        for (y = 0; y < 10; y++)
            //printf("X");
            printf("%c", 1);
    return 0;
}
