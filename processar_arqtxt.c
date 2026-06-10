/*
*CA - Processar Arquivo TXT
*Requer: Um arqiuvo com pelo menso 10 valores interios
*Assegura: Apresetação de alguma informação desse arquivo e outras coisas
*Gabi- 10/06/2024
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Abertura do arquivo
    //modo "r" para leitura --> posiciona a leitura no início do arquivo (vai ler todo o arquivo)
    FILE *arquivo_dados = (fopen("meus_dados.txt", "r"));
    if (arquivo_dados == NULL){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    //leitura do arquivo
    int valor;
    int soma = 0;
    int qnt = 0; 


    while(fscanf(arquivo_dados, "%d", &valor) != EOF){ //lê o valor do arquivo e armazena na variável
        printf("Valor lido do arquivo: %d\n", valor); //imprime o valor lido
        soma += valor; //soma os valores lidos
        qnt++; //conta a quantidade de valores lidos
    }

    printf("Soma dos valores: %d\n", soma); //imprime a soma dos valores lidos

    printf("Média dos valores: %.2f\n", soma / (float)qnt); //imprime a média dos valores lidos
    
      //Fechamento do arquivo
    fclose(arquivo_dados);

    //criação do arquivo de saída
    //modo "w" para escrita --> se o arquivo já existir, ele será sobrescrito; se não existir, ele será criado
    FILE *arquivo_saida = fopen("saida_dados.txt", "w");
    if (arquivo_saida == NULL){
        perror("Criando saida");
        return 2;
    }

    //escrita no arquivo de saída
    fprintf(arquivo_saida, "Soma dos valores: %d\n", soma); //
    fprintf(arquivo_saida, "Média dos valores: %.2f\n", soma / (float)qnt); //escreve a média dos valores no arquivo de saída

    //Fechamento do arquivo de saída
    fclose(arquivo_saida);


    /*
    * Modos:
    * "r" abre somente para a leitura no inicio (o arquivo deve existir)
    *       se abrir no modo "r" e tentar escrever ele não vai ser escrito
    * "w" abre somente para a escrita, se não exixtir cria um novo e se exixtir subescreve
    *       se abrir no modo "w" e tentar ler ele não vai ser lido
    * "a" abre somente para a escrita, se não exixtir cria um novo e se exixtir escreve no final do arquivo
    * "r+" abre para leitura e escrita, posiciona no início do arquivo (o arquivo deve existir)
    * "w+" abre para leitura e escrita, se não exixtir cria um novo e se exixtir subescreve
    * "a+" abre para leitura e escrita, se não exixtir cria um novo e se exixtir escreve no final do arquivo
    */
  

    return 0;
}