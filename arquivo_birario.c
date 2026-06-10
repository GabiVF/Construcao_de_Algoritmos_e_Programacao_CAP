/*
* Aula cap
* Arquivos de dados binários
* Gabi - 10/06/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){    
    //arquivo.dat não vai mostrar o valor de d, ele mostra os bites que apresentam o valor de d
    FILE *arquivo = fopen("dados.dat", "w");
    if(arquivo == NULL){
        perror("Criação do arquivo");
        return 1;
    }

    double d = - 2.56;
    fwrite(&d, sizeof(d), 1, arquivo); //escreve o valor de d no arquivo

    d = 49.818389;
    fwrite(&d, sizeof(d), 1, arquivo); //escreve o valor

    int i = -1;
    fwrite(&i, sizeof(i), 1, arquivo); //escreve o valor de i no arquivo

    fclose(arquivo);

    arquivo = fopen("dados.dat", "r");
    if(arquivo == NULL){
        perror("Leitura do arquivo");
        return 2;
    }

    double d1, d2;
    int i1;

    fread(&d1, sizeof(d1), 1, arquivo); //lê o valor de d do arquivo e armazena na variável d1
    fread(&d2, sizeof(d2), 1, arquivo); //lê o valor de d do arquivo e armazena na variável d2
    fread(&i1, sizeof(i1), 1, arquivo); //lê o valor de i do arquivo e armazena na variável i1

    printf("Valor de d1: %lf\n", d1); //imprime o valor de d1
    printf("Valor de d2: %lf\n", d2); //imprime o valor de d2
    printf("Valor de i1: %d\n", i1); //imprime o valor de i1

    fclose(arquivo);

}