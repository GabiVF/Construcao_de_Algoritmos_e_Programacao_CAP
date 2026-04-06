/*

*/

#include <stdio.h>

int main(void){
    printf("conceito: ");
    char conceito;
    scanf("%c", &conceito);
    //se tiver a entrada de varios caracteres apenas o primero é lido e utilizaado

    double valor;
    switch (conceito){
        case 'A':
        case 'a': //usado para comprar as duas letras, assim a e A tem o mesmo valor e são possiveis de serem usadas
            valor = 10.0;
            break; 
            // sem o break o código continua executando os proximos case
        case 'B':
            valor = 8.0;   
            break;
        case 'C':
            valor = 7.0;
            break;
        case 'D':
            valor = 4.0;
            break;
        case 'E':
            valor = 1.0;
            break;
        default:
            valor = 0.0;
    }
    printf("valor: %g\n", valor);

    return 0;
}