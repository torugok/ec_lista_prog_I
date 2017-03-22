/* Exerc�cio <6>
    Dupla: Victor Hugo Viana Santos, Felipe Vaz Castanheira
*/

/*6. Escreva um programa que leia 20 valores inteiros e armazene-os em um vetor.
Ap�s isso, deve ser exibido para o usu�rio duas op��es: alterar um valor em uma dada posi��o, apagar um valor, ou sair do programa.
O programa s� deve encerrar quando o usu�rio decidir sair.
Para apagar um valor, basta mover todos os valores ap�s ele, uma posi��o para a esquerda.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20],op,pos,valor;

    int i;
    for(i = 0; i < 20; i++)
    {
        printf("Insira um valor em %i: ",i);
        scanf("%i",&vetor[i]);
    }
    while(1)
    {
        printf("Escolha uma opcao: \n   1 - Alterar um valor\n   2 - Apagar um valor\n   3 - Sair\n");
        scanf("%i",&op);
        switch(op)
        {
        case 1:
            printf("Insira a posicao a ser alterada: ");
            scanf("%i",&pos);
            printf("Valor: ");
            scanf("%i",&valor);
            vetor[pos] = valor;
            break;
        case 2:
            printf("Insira a posicao a ser apagada: ");
            scanf("%i",&pos);
            for(i=pos; i < 20; i++)
            {
                vetor[i] = vetor[i+1];
            }
            break;
        case 3:
            return 0;
        }
    }

	fflush(stdin);
    printf("\nPressione qualquer tecla para sair.");
    getch();
}
