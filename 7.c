/* Exercício <7>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*7. Faça um programa que leia uma string de até 1024 caracteres e imprima o comprimento dessa string sem utilizar a função da biblioteca string.h.
O programa deve, também, imprimir a string já sem o caractere de nova linha. Obs: limpe o buffer antes da leitura.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1024],contador=0;
    fflush(stdin);
    printf("Insira uma frase e saiba seu comprimento: ");fgets(str,1024,stdin);
    int i ;
    for(i=0; i<1024; i++)
    {
        if(str[i]== '\n')
        {
            str[i] = '\0';
            break;
        }
        else
            contador++;
    }
    printf("String: \"%s\".\nComprimento: %i.",str,contador);


    fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
