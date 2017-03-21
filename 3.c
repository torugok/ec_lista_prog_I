/*3. Escreva um programa que leia um vetor inteiro de 20 posições.
O usuário irá, então, escolher um número e o programa deve indicar quantas vezes esse número ocorre no vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20],num,contador=0;
    int i;
    for(i = 0; i < 20; i++)
    {
        printf("Insira um valor em %i: ",i);
        scanf("%i",&vetor[i]);
    }
    printf("Digite o numero desejado:  ");
    scanf("%i",&num);
    for(i = 0; i < 20; i++)
    {
        if(vetor[i] == num)
            contador++;
    }
    printf("O valor %i, ocorre %i vezes nesse vetor.",num,contador);
	getch();
}
