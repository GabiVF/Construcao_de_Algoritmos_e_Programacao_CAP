/*CAP- jander
*exemplo de como funciona o switch
*Gabriela vinha feitosa
*/
#include <stdio.h>

/*sem o case tudo o que está dentro da chave é executado, ou seja, o switch não tem função nenhuma
    switch (i){
        printf("a\n");
        printf("b\n");
        printf("c\n");
    }
*/

// switch é um bloco de comandos de comparação única, não precisa de chaves
int main(void){
    int i = 0;
     switch (i){
        case 0:
            printf("i é zero\n");
            break; //break tem função de parar o códiogo, não executa o proximo case.
        case 1:
            printf("i é um\n");
            break;
        default:
            //default é usado para encerrar o código como um else, ou seja, caso nenhuma das opções anteriores seja verdadeira, o default é executado.
    }

    return 0;
}