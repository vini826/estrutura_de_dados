#include <locale.h>
void soma()
{
    setlocale(LC_ALL, "portuguese_Brazil");
    float a, b;
    printf("Digite dois valores separados por espaço:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado é: %.2f\n", a + b);
}