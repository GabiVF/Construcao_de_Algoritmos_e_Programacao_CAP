/*
* CAP aula 2 - condicionais 
* else pindurado e escopo de variáveis
* Gabriela vinha feitosa
*/

#include <stdio.h>

int main(void){
    int i = 0;
    int j = 10;

    if (i == 0){
        if (j == 10){
            i = j;
        } else {
            printf("i não é zero\n");
        }

    }
    return 0;
}