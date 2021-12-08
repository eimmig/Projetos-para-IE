/*
Elaborar uma função que verifica se um número é palíndromo. Um número é palíndromo quando ele não
muda se lido da esquerda para a direita ou da direita para a esquerda. Por exemplo, 2112 é palíndromo.
Elaborar uma função que verifica se um número, que contenha entre 2 e 9 dígitos, é palíndromo. Utilizar essa
função para:
a) Verificar se um número informado pelo usuário é palíndromo.
b) Apresentar os números palíndromos que pertencem a um intervalo informado pelo usuário.
Use menu de opções (com switch-case) e implemente a repetição de programa.
*/
#include <stdio.h>

int palindromo(int num2)
{
    int contador = 0;
    int n;
    int rev;
    int dig;

    n = num2;
    rev = 0;

    while (num2 > 0)
    {
      dig = num2 % 10;
      rev = rev * 10 + dig;
      num2 = num2 / 10;
    }

    if (n == rev)
    {
        printf("%d eh um numero palindromo\n",n);
    }else {
        contador++;
    }
    return contador;
}

void calculaIntervalo(int numMenor, int numMaior)
{
    int num3 = 0, contador = 0;

    {
        for (num3 = numMenor; num3 <= numMaior; num3++)
        {
            contador = palindromo(num3)+contador;
            
        }
        if (contador == numMaior - numMenor+1)
        {
            printf("Nao existe nenhum palindromo");
        }
    }
 }

int main(void)
{

    int repetir = 's', escolha, num, aux, menor, maior;

    while (repetir == 's' || repetir == 'S')
    {
        printf("Opcao 1: Verificar se um numero, informado pelo usuario, e palindromo. (1)\n");
        printf("Opcao 2: Mostrar quais numeros de um intervalo sao palindromos. (2)\n");
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