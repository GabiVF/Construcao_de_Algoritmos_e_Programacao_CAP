/*
* Aula cap
* Representação de dados binários
* Gabi - 10/06/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    union{
        int i;
        unsigned char c[4];
    }dado;

    dado.i = 500;
    for(int i = 0; i < 4; i++){
        printf("%02x ", dado.c[i]);
    }
    printf("\n");



    return 0; 
}