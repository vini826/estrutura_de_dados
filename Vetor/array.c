
#include <stdio.h>

int main()
{
    int numeros[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d numero:     ", i);
        scanf("%d", &numeros[i]);
    }

    printf("Os numeros na ordem inversa sao:\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d = %d\n", i, numeros[i]);
    }

    return 0;
}
