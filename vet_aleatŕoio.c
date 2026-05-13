#include<stdio.h>
#include<stdlib.h>

#define TAMANHO 100

//Função de apresentar o vetor
//*vetor --> sintaxe é equivalente a vetor[]
void apresentar_vetor(int vet[], int tamanho){
    printf("Vetor de números aleatórios:\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
}

//Função para imprimir os números pares do vetor
void vetores_par(int vet[], int tamanho){
    printf("numeros pares no vetor:\n");
    for(int i = 0; i < tamanho; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }
    printf("\n");
}

//função apra retornar o menor valor do vetor
int menor_valor(int vet[], int tamanho){
    if(tamanho != 0){
        int menor = vet[0];
        for(int i = 1; i < tamanho; i++){
            if (vet[i] < menor){
                menor = vet[i];
            }
        }
        return menor;
    }
    return -1; //retorna -1 se o vetor estiver vazio
}

//função posição maxima (indicie)
int posicao_maxima(int vet[], int tamanho){
    if(tamanho != 0){
        int pos_max = 0;
        for(int i = 1; i < tamanho; i++){
            if (vet[i] > vet[pos_max]){
                pos_max = i;
            }
        }
        return pos_max;
    }
    return -1; //retorna -1 se o vetor estiver vazio
}

int main(void){
    int vetor[TAMANHO];
    int quantidade;
    
    //Zerar vetor
    quantidade = 0;

    //preenchendo o vetor com números aleatórios
    for(int i = 0; i < 10; i++){
        vetor[i] = rand() % 100; //números entre 0 e 99
        quantidade++;
    }
    
    //imprimindo o vetor
    apresentar_vetor(vetor, quantidade);
    
    //Acrecentar mais um dado no final
    int novo_dado = 99;
    vetor[quantidade] = novo_dado;
    quantidade++;
    //imprimindo o vetor
    apresentar_vetor(vetor, quantidade);

    //remover o ultimo dado do vetor
    quantidade--;
    apresentar_vetor(vetor, quantidade);

    //imprimindo os números pares
    vetores_par(vetor, quantidade);

    //imprimindo o menor valor do vetor
    printf("o menor valor é: \n%d\n", menor_valor(vetor, quantidade));

    //imprimindo a posição do maior valor do vetor
   printf("o maior valor é: \n%d\n", vetor[posicao_maxima(vetor, quantidade)]);
   printf("a posição do maior valor é: \n%d\n", posicao_maxima(vetor, quantidade));
   
   

    return 0;
}
