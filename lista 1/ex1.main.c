#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lista;

    do
    {
        printf("\nMENU: \n");
        printf("1: Conversao de horas para segundos\n");
        printf("2: transcrever fluxograma\n");
        printf("3: classificacao de estudante\n");
        printf("4: fatorial\n");
        printf("5: Fibonacci\n");
        printf("6: Numeros primos\n");
        printf("7: Palindromo\n");
        printf("8: Sair\n");
        printf("Digite a opção: ");
        scanf("%i", &lista);

        switch (lista)
        {
        case 1:
        {
            float horas, conv;
            printf("Digite as horas para converter em segundos: ");
            scanf("%f", &horas);
            conv = horas * 3600;
            printf("O tempo em segundosé: %.0f\n", conv);
            break;
        }

        case 2:
        {
            int a, b, c, menorAB;
            printf("Digite três números: ");
            scanf("%i %i %i", &a, &b, &c);

            menorAB = (a + b - abs(a - b)) / 2;
            if (menorAB < c)
            {
                printf("MenorAB eh menor\n");
            }
            else
            {
                printf("c eh menor\n");
            }
            break;
        }

        case 3:
        {
            int idade, horas_estudo;

            printf("digite sua idade: ");
            scanf("%i", &idade);
            printf("Digite suas horas de estudo (por semana): ");
            scanf("%i", &horas_estudo);

            if (idade < 18 && horas_estudo <= 15)
            {
                printf("Estudante Jovem\n");
            }
            else if (idade >= 18 && idade < 25 && horas_estudo >= 10)
            {
                printf("Estudante Adulto\n");
            }
            else if (idade >= 25 && horas_estudo < 10)
            {
                printf("Estudante Senior\n");
            }
            else if (horas_estudo < 5)
            {
                printf("Estudante Desmotivado :(");
            }
            else
            {
                printf("Nao categorizado");
            }
            break;
        }

        case 4:
        {
            int num, i, fatorial = 1;

            printf("digite um numero positivo: ");
            scanf("%i", &num);

            if (num < 0)
            {
                printf("numero invalido");
            }
            else
            {
                for (i = num; i >= 1; --i)
                {
                    fatorial *= i;
                }
                printf("Fatorial de %i = %i\n", num, fatorial);
            }
            break;
        }

        case 5:
        {
            // 1º 2º 3º 4º 5º 6º ...
            // 0  1  1  2  3  5  ...

            int N;

            // Solicitar o valor de N e garantir que seja positivo
            do
            {
                printf("Digite um valor inteiro positivo para N: ");
                scanf("%d", &N);

                if (N <= 0)
                {
                    printf("Erro: o valor deve ser um inteiro positivo.\n");
                }
            } while (N <= 0);

            // Inicializar as variáveis para calcular a sequência de Fibonacci
            int a = 0, b = 1, i = 1;

            if (N == 1)
            {
                printf("O Fibonacci de %d é %d\n", N, a);
            }
            else
            {
                // Laço while para calcular o Fibonacci
                while (i < N - 1)
                {
                    int temp = a + b;
                    a = b;
                    b = temp;
                    i++;
                }
                printf("O Fibonacci de %d é %d\n", N, b);
            }

            break;
        }

        case 6:
        {
            int vetor[10], i, j;

            for (i = 0; i < 10; i++) // para preencher o vetor de i = 0 ate i = 9
            {
                int primo = 1;

                if (i < 2)
                {
                    primo = 0; // Números menores que 2 não são primo
                }
                else
                {  // Verifica se o índice é divisível por algum número menor que ele
                    for (j = 2; j <= i / 2; j++) // se for divisivel por outro numeor q não seja 1 e o proprio nº não e primo
                    {
                        if (i % j == 0)
                        {
                            primo = 0;
                            break;
                        }
                    }
                }
                if (primo == 1)
                {
                    vetor[i] = 1;
                }
                else
                {
                    vetor[i] = 0;
                }
            }
            printf("Vetor preenchido: ");
            for (int k = 0; k < 10; k++)
            {
                printf("%d ", vetor[k]);
            }
            printf("\n");
            break;
        }

        case 7:
        {
            char str[100];
            int i, j, comprimento, palindromo = 1;

            // entrada de dados
            printf("Digite uma palavra ou fraze: ");
            getchar();
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha
            // para saber o tamanho da string
            comprimento = strlen(str);

            // verificar se e um palindromo
            for (i = 0, j = comprimento - 1; i < j; i++, j--)
            {
                if (str[i] != str[j])
                {
                    palindromo = 0;
                    break;
                }
            }
            // resultado
            if (palindromo)
            {
                printf("A string '%s' é um palindromo.\n", str);
            }
            else
            {
                printf("a string '%s' não é um palindromo.\n", str);
            }
            break;
        }

        case 8:
            printf("Saindo....\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (lista != 8);

    return 0;
}