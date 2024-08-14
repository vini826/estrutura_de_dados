#include <locale.h>
void divs()
{
    setlocale(LC_ALL, "portuguese_Brazil");
    float a, b;
    printf("Digite dois valores separados por espaço:\n");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("O resultado : %.2f\n", a / b);
    else
        printf("Erro: não é possível dividir por zero.\n");
}