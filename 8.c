/* Exercício <8>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*8. Faça um programa em C que pegue uma substring de uma string lida do teclado.
O usuário deve indicar onde a substring começa e onde ela termina.*/

#include <stdio.h>
#include <stdlib.h>

#define tamanho 1024

int main()
{
    char str[tamanho],substr[tamanho];
    int contador=0;
    fflush(stdin);
    printf("Insira uma string: "); fgets(str,tamanho,stdin);
    int i;
    for(i=0; i<tamanho; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
    int inicio,fim;
    fflush(stdin);
    printf("Insira o inicio da substring: ");scanf("%i",&inicio);
    printf("Insira o fim da substring: ");scanf("%i",&fim);

    for(i=inicio; i<=fim; i++)
        contador++;
    for(i = 0; i<contador; i++)
        substr[i] = str[i+inicio];
    substr[contador] = '\0';
    printf("Substring: %s",substr);
}

