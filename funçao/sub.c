#include <locale.h>
void sub()
{
    setlocale(LC_ALL, "portuguese_Brazil");
    float a, b;
    printf("Digite dois valores separados por espa�o:\n");
    scanf("%f %f", &a, &b);
    printf("O resultado �: %.2f\n", a - b);
}