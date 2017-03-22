/* Exercício <8>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*8. Faça um programa em C que pegue uma substring de uma string lida do teclado.
O usuário deve indicar onde a substring começa e onde ela termina.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 1024;

    char str[TAM],substr[TAM],inicio,fim;
    fflush(stdin);
    fgets(str,TAM,stdin);
    int i;
    for(i=0; i<TAM; i++)
    {
        if(str[i]== '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("Digite onde a substring comeca: ");
    scanf("%i",&inicio);
    printf("Digite onde a substring termina: ");
    scanf("%i",&fim);

    for(i=inicio; i<=fim; i++)
    {
        substr[i] = str[i];
        if(i==fim)
            substr[i+1] = '\0';
    }
    printf("String: %s, Substring: %s",str,substr);

	fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
