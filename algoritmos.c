/****************************
*CAP- aula revisão
*Gabriela Vinha Feitosa
*Algoritmos de exercicio
*implemetação em C
****************************/
#include <stdio.h>

/****************************************************************
Exercício 1
Um sistema precisa verificar se uma pessoa pode participar 
de uma atividade com restrição de idade mínima.

Leia a idade de uma pessoa e considere a seguinte regra:
Idade mínima: 16 anos

Entrada:
Um número inteiro representando a idade

Saída:
Exibir exatamente:
“Permitido” se a idade for maior ou igual a 16
“Não permitido” caso contrário
****************************************************************/


int main(){
int idade;
printf("Qual a idade: ");
scanf("%d", &idade);
if (idade < 16){
    printf("Não permitido");
} else {
    printf("Permitido");
}
return 0;
}

/****************************************************************
Exercício 2
O sistema classifica participantes em categorias com base na idade.

Leia a idade de uma pessoa e utilize as seguintes faixas:
0 a 12: Criança
13 a 17: Adolescente
18 a 59: Adulto
60 ou mais: Idoso

Entrada:
Um número inteiro representando a idade

Saída:
Exibir exatamente uma das categorias acima
****************************************************************/

int main(){
    int idade;
    printf("Qual a sua idade?");
    scanf("%d",&idade);
    if(idade <= 12){
        printf("criança\n");
    }else if(idade <= 17){
        printf("adolescente\n");
    }else if(idade <= 59){
        printf("adulto\n");
    }else{
        printf("idoso\n");
    }

return 0;
}



/****************************************************************
Exercício 3
O sistema calcula o valor final de um serviço com base em faixas de preço.

Leia o valor de uma compra e considere as seguintes regras:
Até 100.00: sem alteração no valor
De 100.01 até 200.00: desconto de 10%
Acima de 200.00: desconto de 20%

Entrada:
Um número real representando o valor da compra

Saída:
Exibir o valor final após a aplicação da regra correspondente

****************************************************************/

int main(){
    double valor;

    printf("Qual o valor?\n");
    scanf("%lf", &valor);
    if (valor <= 100){
        printf("O valor a ser pago é %.2lf\n", valor);

    } else if (valor<=200){
        valor = valor *0.9;
        printf("O valor a ser pago é %.2lf\n", valor);

    } else if (valor > 200){
        valor = valor *0.8;
        printf("O valor a ser pago é %.2lf\n", valor);
    }

    return 0;
}

/****************************************************************
 Exercício 4
O sistema precisa decidir o acesso a um recurso com base em duas condições.
Leia:
A idade de uma pessoa
Um valor inteiro indicando se ela possui autorização (1 para possui, 0 para não possui)

Regras:
Se a idade for menor que 18: acesso negado
Se a idade for maior ou igual a 18:
Se possuir autorização (valor 1): acesso permitido
Caso contrário: acesso negado

Entrada:
Um número inteiro (idade) e um número inteiro (autorização: 0 ou 1)

Saída:
Exibir exatamente:
“Acesso permitido”
“Acesso negado”
****************************************************************/
int main(){
    int idade;
    int acesso;

    printf("Qual a idade?\n");
    scanf("%d", &idade);
    if(idade < 18){
        printf("Acesso negado");
    } else{
        printf("Qual seu acesso: digite 1 ou 0");
        scanf("%d", acesso);
        if (acesso == 1){
            printf ("acesso permitido");
        } else{
        printf("Acesso negado");

        }
    }
}

/****************************************************************
Exercício 5
Em uma biblioteca comunitária, 
o sistema recebe primeiro um número inteiro correspondente à quantidade de livros emprestados em um dia.
Em seguida, para cada livro, é informado um número inteiro representando a quantidade de dias 
que o livro permaneceu emprestado. 
O número de livros emprestados sempre é maior ou igual a 1.

Escreva um programa que processe esses dados e determine a média de dias de empréstimos, 
apresentando-a.

****************************************************************/
int main (){
    int qnt_livros;
    int dias;
    int dias_totais;
    double media;
    printf("Qual a quantidade de livros emprestados?\n");
    scanf("%d", &qnt_livros);
    for(int i = 0; i <= qnt_livros; i++){
        printf("o %dº livro foi emprestado por quantos dias?\n",i);
        scanf("%d",&dias);
        dias_totais += dias;
    }
    media = dias_totais / qnt_livros;
    printf("A média de dias de emprestimo dos livro é %.1ld", media);
    return 0;
}

/****************************************************************
Exercício 6

Em um sistema de monitoramento de desempenho, 
são registradas as velocidades médias diárias de um veículo. 
Cada valor de velocidade (número real) é informado ao sistema individualmente, 
um por linha.

Escreva um programa que leia as velocidades até que o valor -1.0 seja inserido. 
O sentinela não deve ser considerado. 
Ao final, apresente apenas a porcentagem de dias 
em que a velocidade foi estritamente maior que 80.0 em relação ao total de dias. 
Caso não haja registros válidos (i.e. somente o sentinela), nada deve ser apresentado.

****************************************************************/

int main(){
    double velocidade;
    int dias = 0;
    int dias_totais = 0;
    double porcentagem;
    
    while (velocidade != -1.0){
        printf("Qual foi a velocidade media do carro?")
        scanf("%lf", &velocidade);
        if (velocidade > 80.0){
            dias++;
            dias_totais++;

        } else {
        dias_totais++;
        }
    }
    //(double) em parenteses transform/coverte o int em um double
    /*
    100.0 * dias / dias_totais --> funcionaria pq a divisão não seria mais por interios
    */
    porcentagem = (double) dias /dias_totais * 100;
    printf("A porcentagens de dias que a media da velocidade média foi maior que 80.0 é %lf", porcentagem);


    return 0;
}