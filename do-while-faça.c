#include<stdio.h>

int main(){
    int valor = 1;

    //faça enquanto ou faça até 
    //executa o código e depois faz a comparação
    do{
        printf("valor= %d",valor);
        valor++; //pq não tá aparecendo em upcode

    } while (valor < 10); 

    return 0; 
}

//algoritmo para testar senhas até 3 vezes consecutivas
int main(){
int senha_correta = 1234;
int senha;
int tentativas = 0;

do{
    printf("digite sua senha:");
    scanf("%d", &senha);
    tentativas++;
    if(senha != senha_correta){
        printf("senha incorreta! tente de novo");
    } 
    }
    while (senha != senha_correta && tentativas < 3);
    if (senha == senha_correta){
        printf("muito bem\n");

    } else 
    printf("Aguarde 10 min para tentar novamente\n");

    return 0;
}
