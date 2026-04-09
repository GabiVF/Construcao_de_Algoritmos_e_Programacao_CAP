/*cosidere uma sequencia possivelmente vazia de idades terminamdas cm sentinela igual a -1
escreva um algoritmo para apresentar quantas idades são maiores ou iagis a 18
*/

#include<stdio.h>

int main(){
    int idade;
    int qnt_maiores;
    scanf("%d", &idade);
    while (idade!=-1){
        if (idade>=18){
            qnt_maiores++;
        }

    }
    printf("%d", qnt_maiores);

    return 0;
}