#include<stdio.h>
#include<stdlib.h>


bool pertinente(int vetor[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            return true;
        }
    } 
    return false;
}
int main(void){
int vetor[10]; 

//preencher vetor com numero aleatorios
for(int i = 0; i < 10; i++){
    vetor[i] = rand() % 100; //gera numeros aleatorios entre 0 e 99
}

for(int i = 0; i < 10; i++){
    printf("%d ", vetor[i]);
}
printf("\n");

//verificar se o numero 15 pertence ao vetor
int valor = 15;
if(pertinente(vetor, 10, valor)){
    printf("O valor %d pertence ao vetor.\n", valor);
} else {
    printf("O valor %d nao pertence ao vetor.\n", valor);
}

verificar se i valor 50 pertence ao vetor
valor = 50;
if(pertinente(vetor, 10, valor)){
    printf("O valor %d pertence ao vetor.\n", valor);
} else {
    printf("O valor %d nao pertence ao vetor.\n", valor);
}   

return 0;
}