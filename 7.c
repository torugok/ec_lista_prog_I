/* Exerc�cio <7>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*7. Fa�a um programa que leia uma string de at� 1024 caracteres e imprima o comprimento dessa string sem utilizar a fun��o da biblioteca string.h.
O programa deve, tamb�m, imprimir a string j� sem o caractere de nova linha. Obs: limpe o buffer antes da leitura.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1025];
    int contador=0;
    fflush(stdin);
    printf("Insira uma frase e saiba seu comprimento: ");
    fgets(str,1025,stdin);
    int i ;
    for(i=0; i<1025; i++)
    {
        if(str[i]== '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    for(contador; contador<1025; contador++)
    {
        if(str[contador] == '\0')
            break;
    }
    printf("String: \"%s\".\nComprimento: %i.",str,contador);


    fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
