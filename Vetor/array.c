
#include <stdio.h>

int main()
{
    int numeros[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]); // Corrigido: passar o endereço do elemento
    }

    printf("Os numeros na ordem inversa sao:\n");
    for (i = 4; i >= 0; i--) // Corrigido: decrementar até `i` ser 0
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
