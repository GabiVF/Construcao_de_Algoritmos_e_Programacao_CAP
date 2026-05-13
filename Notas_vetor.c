//Um professor tem uma turma de 20 alunos e já aplicou uma prova
//ele quer saber qiantos alunos da turma tiraram as notas
//de 0.0 ate 0.9 
//de 1.0 ate 1.9
//....
//de 9.0 ate 9.9


#include <stdio.h>
#define qnt_alunos 20

int main(void)
{
    double notas[qnt_alunos];
    int contador[10] = {0};
    
    for(int i = 0; i < qnt_alunos; i++){
    printf("qual a nota do %dº aluno:", i+1);
    scanf("%lf", &notas[i]); 
    }
    
    
    for(int i = 0; i < qnt_alunos; i++){
        for(int j = 0; j < 10 ; j++){
            if(notas[i] >= j && notas[i] < j+1)
                contador[j]++;
        }
    }
    
    for(int i = 0; i < 10; i++)
        printf("A quantidade de alunos que tiraram %d,0 ate %d,9: %d\n", i, i, contador[i]);
    

    return 0;

}