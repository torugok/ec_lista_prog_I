/*5. Escreva um programa que leia um vetor inteiro do teclado de 25 posi��es.
O programa deve exibir na tela a quantidade de n�mero pares e �mpares dentro do vetor.
Considere apenas n�meros positivos e 0 (zero) como positivo.
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
    }
    printf("Pares: %i , Impares: %i",pares,impares);
    getch();
}