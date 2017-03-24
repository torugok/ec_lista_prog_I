/* Exercício <5>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*5. Escreva um programa que leia um vetor inteiro do teclado de 25 posições.
O programa deve exibir na tela a quantidade de número pares e ímpares dentro do vetor.
Considere apenas números positivos e 0 (zero) como positivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[25],pares=0,impares=0;

    int i;
    for(i = 0; i < 25; i++)
    {
        printf("Insira um valor em %i: ",i);
        scanf("%i",&vetor[i]);
        if(vetor[i] >= 0 && vetor[i]%2 != 0)
            impares++;
        else if(vetor[i] >= 0 && vetor[i]%2 == 0)
            pares++;
        else
            printf("Numero menor que zero desconsiderado.\n");
    }
    printf("Quantidade de Pares: %i\nQuantidade de Impares: %i",pares,impares);

    fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
