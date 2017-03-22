/* Exercício <2>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*2. Faça um programa em C que leia um vetor inteiro de 10 posições. Coloque todos os
valores do vetor em um outro vetor, mas na ordem inversa. Ex: 3 5 2... ficará no outro
vetor: ...2 5 3. Imprima os dois vetores ao final
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int vetor[10],v_invertido[10],fator = 9,temp =0;

    int i;
    for(i = 0; i < 10; i++)
    {
        printf("\nInsira o valor para o indice %i do vetor: ",i);
        scanf("%i",&vetor[i]);
    }
    for(i = 0; i < 10; i++)
    {
        v_invertido[i] = vetor[i+fator];
        fator -= 2;
    }

    for(i = 0; i < 10; i++)
    {
        printf("Vetor normal: %i ",vetor[i]);
        printf("       Vetor Invertido: %i \n",v_invertido[i]);
    }

    fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
