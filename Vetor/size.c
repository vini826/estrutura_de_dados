#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr_nome;

    // Alocando memória para 30 caracteres
    ptr_nome = (char *)malloc(30 * sizeof(char));
    
    // Verificação de alocação de memória
    if (ptr_nome == NULL)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite seu nome: ");
    
    // Usando fgets em vez de gets para evitar estouro de buffer
    fgets(ptr_nome, 30, stdin);

    // Imprimindo o nome
    printf("Seu nome e: %s", ptr_nome);

    // Liberando a memória alocada
    free(ptr_nome);

    return 0;
}
