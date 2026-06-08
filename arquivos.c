/*
*Gabriela Vinha Feitosa 
*Aula cap /026
*Arquivos em c 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i1;
    fscanf(stdin, "%d", &i1); 
    //stdin é um fluxo de entrada padrão
    fprintf(stdout, "%d\n", i1);
    //stdout é um fluxo de saída padrão
    //funções que permitem ler e escrever em arquivos, ou seja, ler e escrever em arquivos de texto
    //fscanf é uma função que lê um valor do arquivo e armazena em uma variável
    //fprintf é uma função que escreve um valor em um arquivo

    fprintf(stderr, "Erro!!\n");
    //stderr é um fluxo de saída de erro, ou seja, é um fluxo que é usado para escrever mensagens de erro


    //cirar um fluxo novo
    //FILE *(nome) --> define um fluxo

    FILE *fluxo;
    fluxo = fopen("arquivo.txt", "r"); //modo r para leitura
    //tipos de modos: r (leitura), w (escrita), a (acrescentar), r+ (leitura e escrita), w+ (leitura e escrita, apaga o conteúdo do arquivo), a+ (leitura e escrita, acrescenta no final do arquivo)

    if (fluxo == NULL) {
        perror("Erro ao abrir o arquivo\n");
        return 1;
    }
    //fluxo de entrada alterado
    fscanf(fluxo, "%d", &i1); //lê um valor do arquivo e armazena em i1
    fprintf(stdout, "%d\n", i1); //escreve o valor de i1 no fluxo de saída padrão


    //fluxo de saída alterado
    //se tiver arquivo com mesmo nome o arquivo é sobrescrito
    FILE *saida;
    saida = fopen("saida.txt", "w"); //modo w para escrita
    fprintf(saida, "%d\n", i1); //escreve o valor


    fclose(fluxo); //fecha o fluxo
    fclose(saida); //fecha o fluxo de saída

    return 0;
}