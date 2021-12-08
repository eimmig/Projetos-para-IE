/*
) Fazer uma função que verifica se um número é retangular. Um número é retangular se ele pode ser obtido
a partir da soma de uma sequência de números pares, iniciando em 2. Por exemplo: 30 é retangular porque
resulta da soma de 2 + 4 + 6 + 8 + 10. Utilizar essa função para:
a) Verificar se um número, informado pelo usuário, é retangular.
b) Mostrar quais números de um intervalo são retangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.

*/
#include <stdio.h>

int retangular(int num2)
{
    int contador = 0;
    int contador2 = 0;
    int i;
    int verificaRetangular;
    for (i = 2; contador < num2; i = i + 2)
    {
        contador = contador + i;
        if (contador == num2)
        {
            verificaRetangular = 1;
        }
    }
    if (verificaRetangular == 1)
    {
        verificaRetangular = 0;
        printf("%d eh retangular", num2);
        for (int j = 2; j < i; j = j + 2)
        {
            printf(" %d", j);
        }
        printf(" =>%d \n", num2);
    }
    else
    {
        contador2++;
    }
    return contador2;
}
void calculaIntervalo(int numMenor, int numMaior)
{
    int num3 = 0, i, contador2 = 0;
    {
        for (num3 = numMenor; num3 <= numMaior; num3++)
        {
            contador2 = retangular(num3) + contador2;
        }
        if (contador2 == numMaior - numMenor + 1)
        {
            printf("Nao existe nenhum numero retangular");
        }
    }
}

int main(void)
{

    int repetir = 's', escolha, num, aux, i, menor, maior;

    while (repetir == 's' || repetir == 'S')
    {
        printf("Opcao 1: Verificar se um numero, informado pelo usuario, e retangular. (1)\n");
        printf("Opcao 2: Mostrar quais numeros de um intervalo sao retangulares. (2)\n");
        printf("Opcao 1 ou 2: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Informe um numero:  ");
            scanf("%d", &num);

            calculaIntervalo(num, num);

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