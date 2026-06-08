#include <stdio.h>
#include <stdlib.h>

struct aluno {
    char nome[50];
    int ra;
    double nota1, nota2, nota3;
};

void leia_aluno(struct aluno *aluno){
        printf("Nome: ");
        scanf("%s", aluno->nome);
        printf("RA: ");
        scanf("%d", &aluno->ra);
        printf("Nota 1: ");
        scanf("%lf", &aluno->nota1);
        printf("Nota 2: ");
        scanf("%lf", &aluno->nota2);
        printf("Nota 3: ");
        scanf("%lf", &aluno->nota3);
        //scanf("%lf%lf%lf" , &aluno->nota1, &aluno->nota2, &aluno->nota3); anota as notas do aluno
    }

    //ñ precisa passar cm ponteiro, pq a função não vai modificar o aluno, apenas vai ler os dados do aluno e imprimir na tela
    void escreva_aluno(struct aluno aluno){
        printf("------------------------------\n");
        printf("Nome: %s", aluno.nome);
        printf("RA: %d\n", aluno.ra);
        printf("Nota 1: %.2lf\n", aluno.nota1);
        printf("Nota 2: %.2lf\n", aluno.nota2);
        printf("Nota 3: %.2lf\n", aluno.nota3);
        //notas ("notas: %.2lf %.2lf %.2lf\n", aluno.nota1, aluno.nota2, aluno.nota3); é igual a escrever as notas uma por uma
        printf("------------------------------\n");
    }

int main(void){


    struct aluno aluno[26];
    for(int i = 0; i < 3; i++)
        leia_aluno(&aluno[i]);

/*  for(int i = 0; i < 3; i++)
        escreva_aluno(aluno[i]);
*/

    //pega o vetor na posição i
    //usa os ponteiros para pegar as variaveis em cada um dos pontos
    for(int i = 0; i <3; i++){
        printf("%08d %15s " , aluno[i].ra, aluno[i].nome);
        printf("%5.1lf %5.1lf %5.1lf\n", aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);
        double media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3.0;
        printf("Media: %5.1lf\n", media);
    }
        return 0;

}