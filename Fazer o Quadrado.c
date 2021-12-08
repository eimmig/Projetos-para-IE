/*
Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
desenha um quadrado ou retângulo na tela utilizando o caractere
*/
#include <stdio.h>

int quadrado(int num2, int num3, char caractere)
{
    int i;
    int j;

    for (i = 1; i <= num3; i++)
    {
        for (j = 1; j <= num2; j++)
        {
            printf("%c", caractere);
        }
        printf("\n");
    }
}

int main(void)
{

    int repetir = 's', escolha, num1, num;
    char caractere;

    while (repetir == 's' || repetir == 'S')
    {
        printf("Digite o numero de colunas do desenho ");
        scanf("%d", &num);
        printf("\nDigite o numero de linhas do desenho ");
        scanf("%d", &num1);
        fflush(stdin);
        printf("\nDigite o caractere ");
        scanf("%c", &caractere);

        quadrado(num, num1, caractere);

        printf("\nDigite S para repetir o programa\n");
        repetir = getch();
    }
    return 0;
}