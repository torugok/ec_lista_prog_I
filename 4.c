/*4. Escreva um programa que leia um vetor double do teclado de 15 posições.
O programa deve indicar qual o maior e qual o menor valores do vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vetor[15],maior,menor;

    printf("Insira um valor em %i: ",0);
    scanf("%lf",&vetor[0]);
    maior = vetor[0];menor = vetor[0];
    int i;
    for(i = 1; i < 15; i++)
    {
        printf("Insira um valor em %i: ",i);
        scanf("%lf",&vetor[i]);
        if(vetor[i]>maior)
            maior = vetor[i];
        else if(vetor[i]<menor)
            menor = vetor[i];
    }
    printf("Maior %lf ; Menor %lf",maior,menor);
	getch();
}
