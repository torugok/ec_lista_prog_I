/*9. Fa�a um programa que verifique se uma substring lida do teclado est� presente
ou n�o em uma string maior lida anteriormente.
A exist�ncia ou n�o deve ser mostrada na tela atrav�s de uma mensagem.
Limite da string: 1024 caracteres.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int TAM = 1024,fimsub=0;

    char str[TAM],substr[TAM],inicio,fim;
    fflush(stdin);
    printf("Insira a string maior: ");fgets(str,TAM,stdin);
    fflush(stdin);
    printf("Insira a substring: ");fgets(substr,TAM,stdin);
    int i;
    for(i=0; i < TAM; i++)
    {
        if(str[i] == '\n')it
            str[i] = '\0';
        if(substr[i] == '\n')
            substr[i] = '\0';
    }
    for(i=0; i < TAM; i++)
    {
        if(substr[i] == '\0')
            break;
        fimsub++;
    }

    int presente = 0;

    if(fimsub == 1)
    {
       for(i=0; i<TAM; i++)
       {
           if(substr[0]==str[i])
           {
               presente = 1;
               break;
           }
       }
    }
    else
    {
        for(i=0; i < TAM; i++)
        {
            if(substr[i] !='\0')
            {
                if(substr[0]==str[i])
                {
                    int it;
                    for(it=1; it<fimsub; it++)
                    {
                        if(substr[it] == str[i+it])
                        {
                            presente = 1;
                        }
                        else
                        {
                            presente = 0;
                        }
                    }
                }
            }
        }
    }
    if(presente == 1)
        printf("Essa substring esta presente na string maior.");
    else
        printf("Essa string nao esta contida na string maior");
	
    getch();
}
