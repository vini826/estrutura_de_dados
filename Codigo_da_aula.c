#include <stdio.h>
#include <locale.h>

void soma()
{
    float a, b;
    printf("Digite dois valores separados por espa�o:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado �: %f\n", a + b);
}

void sub()
{
    float a, b;
    printf("Digite dois valores separados por espa�o:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado �: %f\n", a - b);
}

void mult()
{
    float a, b;
    printf("Digite dois valores separados por espa�o:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado �: %f\n", a * b);
}

void divs()
{
    float a, b;
    printf("Digite dois valores separados por espa�o:\n");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("O resultado �: %f\n", a / b);
    else
        printf("Erro: n�o � poss�vel dividir por zero.\n");
}

int main()
{
    setlocale(LC_ALL, "portuguese_Brazil"); 

    int escolha;

    do
    {
        printf("Menu:\n");
        printf("1. Soma\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
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
            printf("N�mero inv�lido!!!\n");
        }
    } while (escolha != 5);

    return 0;
}
