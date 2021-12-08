/*
Fazer uma função que verifica se um número é triangular. Um número natural é triangular quando o
produto de três números naturais consecutivos for igual ao próprio número. Por exemplo: 120 é triangular,
pois 4 * 5 * 6 = 120. Use essa função para:
a) Verificar se um número, informado pelo usuário, é triangular.
b) Mostrar quais números de um intervalo são triangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.

*/
#include <stdio.h>

int triangular(int num2)
{
    for (int i = 1; i * (i + 1) * (i + 2) <= num2; i++)
    {
        if (i * (i + 1) * (i + 2) == num2)
        {
            return (i);
        }
    }
    return -1;
}

void calculaIntervalo(int numMenor, int numMaior)
{
    int num3 = 0, i, contador = 0;

    {
        for (num3 = numMenor; num3 <= numMaior ; num3++)
        {
            i = triangular(num3);
            if (i != -1)
            {
                printf("\n%d eh triangular %d*%d*%d => %d ", num3, i, i + 1, i + 2, num3);
            }else{
                contador++;
            }
        }
        if(contador == numMaior - numMenor+1){
            printf("Nao existe nenhum numero triangular");
        }
    }
}

int main(void)
{

    int repetir = 's', escolha, num, aux, i, menor, maior;

    while (repetir == 's' || repetir == 'S')
    {
        printf("Opcao 1: Verificar se um numero, informado pelo usuario, e triangular. (1)\n");
        printf("Opcao 2: Mostrar quais numeros de um intervalo sao triangulares. (2)\n");
        printf("Opcao 1 ou 2: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Informe um numero:  ");
            scanf("%d", &num);

            i = triangular(num);
            if (i != -1)
            {
                printf("%d eh triangular %d*%d*%d => %d", num, i, i + 1, i + 2, num);
            }
            else
            {
                printf("%d nao eh triangular", num);
            }
            break;

        case 2:
            printf("Informe o menor numero:  ");
            scanf("%d", &menor);
            printf("Informe o maior numero:  ");
            scanf("%d", &maior);

            if (maior < menor)
            {
                aux = maior;
                maior = menor;
                menor = aux;
            }
            calculaIntervalo(menor, maior);

            break;

        default:

            printf("Opcao Invalida.");
        }
        printf("\nDigite S para repetir o programa\n");
        repetir = getch();
    }
    return 0;
}