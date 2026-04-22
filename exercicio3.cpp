#include <stdio.h>

int main() {
    int codigo[10];
    int stock[10];

    int i, codigoPesquisa, encontrado;

    // Leitura dos dados dos produtos
    for (i = 0; i < 10; i++) {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &codigo[i]);

        printf("Digite o stock do produto %d: ", i + 1);
        scanf("%d", &stock[i]);
    }

    // Pesquisa
    printf("\n--- PESQUISA DE PRODUTO ---\n");
    printf("Digite o codigo a procurar (ou -1 para sair): ");
    scanf("%d", &codigoPesquisa);

    while (codigoPesquisa != -1) {
        encontrado = 0;

        for (i = 0; i < 10; i++) {
            if (codigo[i] == codigoPesquisa) {
                printf("\nProduto encontrado!\n");
                printf("Quantidade em stock: %d\n", stock[i]);

                if (stock[i] < 5) {
                    printf("AVISO: STOCK CRITICO!\n");
                }

                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            printf("Produto nao encontrado.\n");
        }

        printf("\nDigite outro codigo (ou -1 para sair): ");
        scanf("%d", &codigoPesquisa);
    }

    return 0;
}
