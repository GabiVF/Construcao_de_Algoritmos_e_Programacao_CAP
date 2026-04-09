/*calcular a media de notas de uma turma
entradas: quantidades de alunos,notas de cada um dos alunos
saida: media de notas da turma
*/

//Em algoritmo

/*
//A declaração das variaves são opcionais (jander não declara)
//lembrar de não declarar as variaveis para a prova 

numero media_turma <- 0
numero nota_aluno <- 0
numero nota_total<-0
numero quantidade_alunos <-0
numero contador<-0
    
    obtenha quantidade de alunos
    enquanto 
        contador < quantidade_alunos
        obtenha nota_aluno
        nota_total = nota_total + nota_aluno
        contador + 1
    fim enquanto
    media_turma = nota_total / quantidade_alunos
    apresente media_turma

*/

#include<stdio.h>

int main(){
    double nota_aluno;
    double media_turma;
    double soma;
    int qnt_alunos;

    printf("Qual a quantidade de alunos?\n");
    scanf("%d", &qnt_alunos);
    for(int i= 1; i<= qnt_alunos; i++){
        printf("Qual a nota do %d aluno: \n", i);
        scanf("%lf", &nota_aluno);
        //soma =  soma + nota_aluno;
        soma += nota_aluno; // jeito simplificado de fazer a conta

    }
    media_turma = soma / qnt_alunos;
    printf("A media de notas da turma é: %.1lf\n", media_turma);
}