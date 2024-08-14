#include <stdio.h>
#include <locale.h>

void soma()
{
    float a, b;
    printf("Digite dois valores separados por espaço:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado é: %.2f\n", a + b);
}

void sub()
{
    float a, b;
    printf("Digite dois valores separados por espaço:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado é: %.2f\n", a - b);
}

void mult()
{
    float a, b;
    printf("Digite dois valores separados por espaço:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado é: %.2f\n", a * b);
}

void divs()
{
    float a, b;
    printf("Digite dois valores separados por espaço:\n");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("O resultado é: %.2f\n", a / b);
    else
        printf("Erro: não é possível dividir por zero.\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese_Brazil");

    int escolha;

    do
    {
        printf("Menu:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Digite a sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            soma();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
            break;
        case 4:
            divs();
            break;
        case 5:
            printf("Saindo... Obrigado!!!\n");
            break;
        default:
            printf("Número inválido!!!\n");
        }
    } while (escolha != 5);

    return 0;
}
