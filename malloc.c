#include <stdio.h>
#include <stdlib.h>

int main(void){

    int n = 1; 
    while(n != 0){
    scanf("%d", &n);

    int *vet;
   
    vet = malloc(n * sizeof(int));
    if(vet == NULL){
        printf("Erro de alocação de memória\n");
        return 1;
    }
    else {
        printf("Memória alocada com sucesso\n");

        for(int i = 0; i < n; i++)
        vet[i] = i;
        
        free(vet);
    }
};    

    return 0;
}