/*
Fazer uma função que verifica se um número é um quadrado perfeito. Um número é quadrado perfeito se
possui como raiz quadrada um valor inteiro. A função para obter a raiz quadrada é sqrt() e está na biblioteca
math.h. Por exemplo, 25 é um quadrado perfeito porque raiz quadrada de 25 é 5. Utilizar essa função para:
a) Verificar se um número, informado pelo usuário, é um quadrado perfeito.
b) Mostrar quais números de um intervalo são quadrados perfeitos.
Use menu de opções (com switch-case) e implemente a repetição de programa.
*/
#include <stdio.h>
#include <math.h>>

int quadrada(int num2)
{
    int contador = 0;
    int verificaQuadrada2;
    float verificaQuadrada;

    verificaQuadrada = sqrt(num2);
    verificaQuadrada2 = sqrt(num2);
      
    if (verificaQuadrada2 == verificaQuadrada)
    {
        printf("%d eh quadrado perfeito ==>  raiz quadrada de %d eh %d\n", num2, num2, verificaQuadrada2);
    }else {
        contador++;
    }
    verificaQuadrada2 = 0;
    verificaQuadrada = 0;
    return contador;
}

void calculaIntervalo(int numMenor, int numMaior)
{
    int num3 = 0, contador = 0;

    {
        for (num3 = numMenor; num3 <= numMaior; num3++)
        {
            contador = quadrada(num3)+contador;
            
        }
        if (contador == numMaior - numMenor+1)
        {
            printf("Nao existe nenhuma raiz quadrada");
        }
    }
 }

int main(void)
{

    int repetir = 's', escolha, num, aux, menor, maior;

    while (repetir == 's' || repetir == 'S')
    {
        printf("Opcao 1: Verificar se um numero, informado pelo usuario, e um quadrado perfeito. (1)\n");
        printf("Opcao 2: Mostrar quais numeros de um intervalo sao quadrados perfeitos. (2)\n");
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