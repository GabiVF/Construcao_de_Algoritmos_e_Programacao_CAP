#include<stdio.h>

//Para essa função é necessário que seja usado ponteiros
//para que seja possível modificar o valor das variáveis a e b
void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
void troca(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
    Nesse caso, a e b seriam alterados. 
    Porem fora da função não ocorreria efetivamente a troca das variaveis
*/

int main(void){

    int i = 5;
    printf("O valor de i é: %d\n", i);

    //ponteiro para inteiro
    int *pi = &i; 
    printf("i aponta para o valor %d\n", *pi);

    int vi[] = {1, 2, 3, 4, 5};
    pi = &vi[2];
    printf("O valor do vetor vi[2] é: %d\n", *pi);

    *pi = 100;
    printf("O valor do vetor vi[2] é: %d\n", vi[2]);

    /*
    * [int] *pi --> é o que sobra/ nesse caso é tipo inteiro
    * int [*pi]     
    * [int *] pi
    *   pi--> é o endereço
    *  *pi--> é o valor que é apontado / o valor do endereço
    */

    int k1 = 10, k2 = 20;
    printf("Antes da troca: k1 = %d, k2 = %d\n", k1, k2);
    troca(&k1, &k2);
    printf("Depois da troca: k1 = %d, k2 = %d\n", k1, k2);

    //tipos de escrita de ponteiros
    //pi->v1[2] é igual a *pi = &v1[2]

    //ponteiro como vetor
    //vet e pv são equivalentes
    int vet[]= {10, 20, 30, 40, 50};
    int *pv = vet; //pv aponta para o primeiro elemento do vetor
    printf("O primeiro elemento do vetor é: %d\n", *pv);

    for(int i = 0; i < 5; i++){
        printf("vetor: %d\n", pv[i]);        
    }

    //aritmética de ponteiros
    p = vet;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p = p + 1;
    printf("%d\n", *p);
    

    return 0; 
}