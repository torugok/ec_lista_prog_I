/* Exercício <12>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*12. Escreva um programa que leia o nome e sobrenome do usuário. O programa deve
concatenar as duas strings duas vezes. Uma, através de uma função da biblioteca
string.h. Outra, manualmente, sem utilizar a função. Máximo do nome: 20 caracteres.
Máximo do sobrenome: 15 caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamnome 21
#define tamsobre 16

int main()
{
    char nome[tamnome],sobrenome[tamsobre], concact[37];

    fflush(stdin);
    printf("Insira um nome: ");
    fgets(nome,tamnome,stdin);

    fflush(stdin);
    printf("Insira um sobrenome: ");
    fgets(sobrenome,tamsobre,stdin);

    int i;
    for(i=0; i<tamnome; i++)
    {
        if(nome[i] == '\n')
        {
            nome[i] = '\0';
            break;
        }
    }
    for(i=0; i<tamsobre; i++)
    {
        if(sobrenome[i] == '\n')
        {
            sobrenome[i] = '\0';
            break;
        }
    }


    strcpy(concact,nome);
    strcat(concact," ");
    strcat(concact,sobrenome);
    printf("\nCom string.h: %s",concact);


    int lennome = strlen(nome);
    int lensobre = strlen(sobrenome);

    for(i=0; i<lennome;i++)
    {
        concact[i] = nome[i];
    }
    concact[i] = ' ';

    int p;
    for(p=0; p<lensobre; p++)
    {
        i++;
        concact[i] = sobrenome[p];
    }

    printf("\nSem string.h: %s",concact);

	fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
