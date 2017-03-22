/* Exercício <10>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*10. Escreva um código em C que leia uma string do teclado. Após isso, o usuário deve ter
duas opções: converter todos os caracteres para maiúsculos ou todos os caracateres
para minúsculos. Exiba a string resultante. Máximo: 1024 caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int TAM = 1024, contador=0;
    char str[TAM];

    fflush(stdin);
    printf("Insira um texto: ");fgets(str,TAM,stdin);

    int i;
    for(i=0; i<TAM; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        contador++;
    }
    printf("\n1 - Maiusculas\n2 - Minusculas\n");
    int op;
    scanf("%i",&op);
    switch(op)
    {
        case 1:
            for(i=0; i<contador; i++)
            {
                str[i] = toupper(str[i]);
            }
            break;
        case 2:
            for(i=0; i<contador; i++)
            {
                str[i] = tolower(str[i]);
            }
            break;
    }

    printf("String resultante: %s",str);

    fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
