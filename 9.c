/* Exercício <9>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*9. Faça um programa que verifique se uma substring lida do teclado está presente
ou não em uma string maior lida anteriormente.
A existência ou não deve ser mostrada na tela através de uma mensagem.
Limite da string: 1024 caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho 1025

int main()
{
    char str[tamanho],substr[tamanho];
    fflush(stdin);
    printf("Insira a string maior: ");fgets(str,tamanho,stdin);
    fflush(stdin);
    printf("Insira a substring: ");fgets(substr,tamanho,stdin);
    int i;
    for(i=0; i < tamanho; i++)
    {
        if(str[i] == '\n')
            str[i] = '\0';
        if(substr[i] == '\n')
            substr[i] = '\0';
    }

    if(strstr(str,substr) == 0)
        printf("Essa string nao esta presente na string maior.");
    else
        printf("Essa string esta presente na string maior.");

    fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
