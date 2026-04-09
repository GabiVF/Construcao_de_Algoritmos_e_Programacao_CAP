#include <stdio.h>

int main(void){
    
    //conta de 1 ate 5
    int valor = 1;
    while(valor<=5){
        printf("valor = %d\n", valor);
        valor++;
        
    }
    

    //usando o for
    /*
    for(int valor = 0; valor <= 10; valor++){
        printf("valor = %d\n", valor);
        
    }
    Da para declarar o valor no for ou usar a variavel já declarada
    */
    
    for(valor; valor <= 10; valor++){
        printf("valor = %d\n", valor);
        
    }
    
    //while
    while (valor != 0){
    printf("Digite 0 para parar\n");
    scanf("%d", &valor);
    printf("valor: %d\n", valor);
    }
    
    return 0;
}