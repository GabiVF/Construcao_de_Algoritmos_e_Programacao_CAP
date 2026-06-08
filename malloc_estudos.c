#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *c = malloc(77);
    if (c == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    int i = 0;
    for(int i = 0; i < 77; i++)
        c[i] = 'A' + i;
    
    for(int i = 0; i < 77; i++)
        printf("%c ", c[i]);
    printf("\n");
    
    
    //Programa termina sem liberar a memória alocada
    //Para liberar a memória alocada
    free(c);


//para alocar as variaveis 
int *ptr = malloc(sizeof(int)); //aloca memória para um inteiro
// assim o tamanho da memória é criado igual ao tamanho do tp de dado que vai ser armazenado
//nesse caso um tp inteiro, ou seja, 4 bytes

int *p = &c[12];
p[0] = 144;
p[1] = 155;
p[-1] = 133;



for(int i = 0; i < 77; i++)
        printf("%c ", c[i]);
    printf("\n");

    return 0;
}
