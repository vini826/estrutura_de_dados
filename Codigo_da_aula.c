#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2, resultado;

    // coleta de dados
    printf("Digite o primeiro numero:   ");
    scanf("%f", &num1);
    printf("Digite o segundo numero:   ");
    scanf("%f", &num2);

    while (1)
    {
        printf("calculadora simples\n");
        printf("1 adicao\n");
        printf("2 subtracao\n");
        printf("3 multiplicacao\n");
        printf("4 divisao\n");
        printf("5 sair\n");

        printf("Escolha uma opcao:  ");
        scanf("%d", &opcao);

        printf("opcao escolhida:    %d", opcao);

        switch (opcao)
        {
        case 1:
            resultado = num1 + num2;
            printf("resultado:  %f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("resultado:  %f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("resultado:  %f\n", resultado);
            break;
        case 4:
            if (num2 != 0)
            {
                resultado = num1 / num2;
                printf("resultado:  %f\n", resultado);
            }
            else
            {
                printf("erro, divisao por zero\n");
            }
            break;
        case 5:
            return 0;

        default:
            printf("opcao invalida\n");
            break;
        }
    }
}
