/*
*Aula CAP condicionais 2
*Gabriela vinha feitosa
*Detrminar o ponto em que y =ax + b cruza o eixo x
*requer: a e b 
*assegura: apresentação de:
* -sem x, caso a reta seja paralela a c estanfo acia ou abaixo do eixo x
* - exio x, caso a reta coincidda com o eixo x
* - o valor de x, quando y = 0
*/


#include <stdio.h>

int main(void){
    double a, b; 
    scanf("%lf %lf", &a, &b);

    if (a != 0){
        double x = -b/a;
        printf("%g\n", x);
        
    }
    else if (b == 0){
        printf("eixo x\n");
    }
    else{
        printf("sem x\n");
    }
    
}