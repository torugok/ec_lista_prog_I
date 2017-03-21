/*11. Faça um programa que, dada um string do teclado, indique se um determinado
caractere, em determinada posição (indicada pelo usuário) é maiúscula ou minúscula.
Máximo: 1024 caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int TAM = 1024, contador=0;
    char str[TAM];

    fflush(stdin);
    printf("Insira um texto: ");
    fgets(str,TAM,stdin);


    printf("\nInsira uma posicao: ");
    int pos;
    scanf("%i",&pos);

    if(isupper(str[pos]))
    {
        printf("Esse caractere eh maiusculo");
    }
    else
    {
        printf("Esse caractere eh minusculo");
    }
	getch();
}
