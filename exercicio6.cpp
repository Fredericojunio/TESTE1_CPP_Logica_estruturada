#include <stdio.h>
#include <string.h>

int main() {
    char produtos[20][50];
    float precos[20];

    char nomePesquisa[50];
    int i;
    int encontrado;

    // Leitura dos produtos
    for (i = 0; i < 20; i++) {
        printf("Produto %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i]);

        printf("Preco: ");
        scanf("%f", &precos[i]);
    }

    // Pesquisa
    printf("\n--- PESQUISA DE PRODUTO ---\n");
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nomePesquisa);

    encontrado = 0;

    for (i = 0; i < 20; i++) {
        if (strcmp(produtos[i], nomePesquisa) == 0) {
            printf("\nProduto encontrado!\n");
            printf("Preco: %.2f MT\n", precos[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nProduto nao encontrado no sistema.\n");
    }

    return 0;
}
