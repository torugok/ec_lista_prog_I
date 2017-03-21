/* Exercício <1>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/


/*1. Faça um programa para encontrar a soma de todos os elementos de um vetor inteiro.
Os valores devem ser lidos do teclado. O tamanho máximo do vetor é 100, mas o
usuário irá delimitar quantos valores irá inserir, entre 1 e 100.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite,soma=0,valores[100];
    printf("Insira quantos valores serao lidos(1-100): ");
    scanf("%i",&limite);
    while(limite>100)
    {
        printf("Valor maior que 100, insira um valor entre 1 e 100: ");
        scanf("%i",&limite);
    }
    int i;
    for(i = 0; i < limite; i++)
    {
        printf("\nInsira o valor para o indice %i do vetor: ",i);
        scanf("%i",&valores[i]);
        soma += valores[i];
    }
    printf("soma total: %i",soma);
    getch();
}
