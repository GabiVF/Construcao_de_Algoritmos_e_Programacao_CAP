/*
*CAP- Jander
*Executando for
*/

#include<stdio.h>

int main(){

    //usando o for
    /*
    int valor = 0;
    for(valor; valor <= 10; valor++){
        printf("valor = %d\n", valor);
        
    }
    Da para declarar o valor no for ou usar a variavel já declarada
    se a variavel for declarada dentro do for ela é usada apenas para esse único for

        for (antes; condição; incrmento/decremento)
            ******************
            Bloco de comando
            ******************

        1º Executa o antes
        2º Enquanto cond for v : comando
        3º Executa incremento/decremento 

        int i = 0;
        while (i<=10);{
        printf("%d", i);
        i++;
        }
    */

    //acrecentando
    for(int i = 0; i <= 10; i++){
        printf("valor atual de i:%d\n", i);
    }

    //decrementando
    for(int i = 10; i >= 0; i--){
        printf("valor atual de i:%d\n", i);
    }

    //acrecentando em dois
     for(int i = 0; i <= 10; i++){
        printf("valor atual de i:%d\n", i);
    }
    //for sem a variavel inicial explicita
    int j = 10;
    for(;j<15; j++){
        printf("%d\n", j);
    }
    //for sem variavel e incremento
    int k = 10;
    for(; k<15;){
        k++;
        printf("%d", k);
    }

    //loop infinito
    for(;;){
        printf("oi");
    }

    // o for tambem funciona sem as chaves assim como o while e o if 
    for(int i; i < 20; i+2)
        printf("oi\n");
 return 0;
    
 
}