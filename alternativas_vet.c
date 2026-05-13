/*
* Aula CAP - alternativas para vetores
* Professor: Jander
* Gabriela 
* Vetores com sentinela e vetores com comprimento controlado
*/


#include <stdio.h>

#define TAMANHO 50
#define SENTINELA -2147483648 //valor arbitário

int main(void){

    //ciração de vetores segunfo duas estrategias
    int vetor_sentinela[TAMANHO];//com sentinela
    vetor_sentinela[0] = SENTINELA; //assume que não há dados

    int vetor_controlado[TAMANHO];//com compreimento externo
    int comprimento = 0; 

    //leitura de dados até atingir -1 (só exemplo)
    int dado;
    printf("Dado: ");
    scanf("%d", &dado);
    while(dado != -1){
        //inserção dos dados nos vetores
        int i = 0;
        vetor_sentinela[i] = dado;
        vetor_sentinela[i+1] = SENTINELA; //garante que o próximo elemento seja a sentinela
        i++;

        vetor_controlado[comprimento] = dado;
        comprimento++;
        
        //Próximo
        printf("Dado: ");
        scanf("%d", &dado);
    
        //Apresenta os vetores lidos
        printf("Vetor com sentinela:\n");
        i = 0;
        while(vetor_sentinela[i] != SENTINELA){
            printf("%d ", vetor_sentinela[i]);
            i++;
        }
        printf("\n");
        printf("\nVetor com comprimento controlado:\n");
        for(int j = 0; j < comprimento; j++){
            printf("%d ", vetor_controlado[j]);
        }
        printf("\n");
    
    }
    //Deixar com um comprimento expecifico
    printf("Defina o comprimento máximo do vetor: ");
    int qnt_max = 0;
    scanf("%d", &qnt_max);
    vetor_sentinela[qnt_max-1] = SENTINELA; //garante a quantidade maxima de elementos
    comprimento = qnt_max; //define o comprimento do vetor controlado

    //zerar os vetores
    vetor_sentinela[0] = SENTINELA; //assume que não há dados
    comprimento = 0;    

    return 0;
}