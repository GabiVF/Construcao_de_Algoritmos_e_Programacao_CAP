#include<stdio.h>
#include<stdlib.h>

int main(void){
    int vetor[10];
    
//preencher vetor com numero aleatorios
for(int i = 0; i < 10; i++)
    vetor[i] = rand() % 100;

//imprimir vetor
printf("Vetor original:\n");
for(int i = 0; i < 10; i++){
    printf("%d ", vetor[i]);
}
printf("\n");


//maneiras de escrever o vetor
int i = 0;
printf("vetor[%d] = %d\n", i, vetor[i++]); //i = 0 no final é incrementado para 1
printf("vetor[%d] = %d\n", i, vetor[i++]);
printf("vetor[%d] = %d\n", i, vetor[i++]);
printf("vetor[%d] = %d\n", i, vetor[i++]);
printf("vetor[%d] = %d\n", i, vetor[i++]);
printf("vetor[%d] = %d\n", i, vetor[i++]); //i = 5 no final é incrementado para 6
printf("indice i = %d\n", i); //i = 6

int v2[4];
i = 0;
while((v2[i] = vetor[i++])!= 4);

//v[0] = 0[v]
printf("primeiro vetor: %d\n", vetor[0]); //15
printf("primeiro vetor: %d\n", 0[vetor]); //15

//erro de compilação pois cada compilador avalia de um jeito diferente a equação
int j = 2 * i++ - 3 * i;
printf("j = %d\n", j); 





    return 0;
}