/*
* Gabriela Vinha Feitosa
* Cap - 2026
* Matrizes alocadas dinamicamente
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linhas = 3, colunas = 4;

    //vetor fixo: int *l[linhas]; // Vetor de ponteiros para as linhas da matriz

    // Alocando memória para o **vetor de ponteiros**
    int **l = malloc(linhas * sizeof(int*));
    //ponteiro de ponteiro --> vetor de ponteiros
    
    if (l == NULL) {
        perror("Erro ao alocar memória\n"); 
        //perror é uma função que imprime uma mensagem de erro mais detalhada com o motivo do erro



    int *p = malloc(linhas * colunas * sizeof(int)); 
    if (p == NULL) {
        perror("Erro ao alocar memória\n");
        return 1;
    }

    // Preenchendo a matriz
    
    int *p0 = p;
    int *p1 = &p[colunas]; // = &p[4]
    int *p2 = &p[2 * colunas]; // = &p[8]
    
   

    l[0] = p;
    l[1] = &p[colunas];
    l[2] = &p[2 * colunas];

    for (int i = 0; i < linhas; i++) {
        l[i] = &p[colunas * i];
    }

    //algumas nomenclaturas para acessar os elementos da matriz
    //  *l[1] = 200 --> l[1][0] = 200 --> p[4] = 200
    
    for(int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            l[i][j] = i + j; // Preenchendo a matriz com valores
            printf("%3d ", l[i][j]); // Imprimindo os valores da matriz
            //O número 3 no %d serve para imprimir os números com 3 de espaço
        }
        printf("\n");
    }
    
 


    free(p);
    free(l);
    return 0;
}
   