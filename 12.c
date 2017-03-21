/*12. Escreva um programa que leia o nome e sobrenome do usuário. O programa deve
concatenar as duas strings duas vezes. Uma, através de uma função da biblioteca
string.h. Outra, manualmente, sem utilizar a função. Máximo do nome: 20 caracteres.
Máximo do sobrenome: 15 caracteres.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tamnome = 20,tamsobre = 15, contadornome=0,contadorsobre=0,fator = tamnome+tamsobre;
    char nome[tamnome],sobrenome[tamsobre], concact[tamnome+tamsobre];

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
        contadornome++;
    }
    for(i=0; i<tamsobre; i++)
    {
        if(sobrenome[i] == '\n')
        {
            sobrenome[i] = '\0';
            break;
        }
        contadorsobre++;
    }

    strcpy(concact,nome);
    strcat(concact," ");
    strcat(concact,sobrenome);
    printf("\nCom string.h: %s",concact);

    for(i=0; i<contadornome;i++)
    {
        concact[i] = nome[i];
    }
    concact[contadornome] = ' ';
    for(i=0; i<=contadorsobre; i++)
    {
        concact[i+contadornome+1] = sobrenome[i];
    }
    printf("\nSem string.h: %s",concact);
	getch();
}
