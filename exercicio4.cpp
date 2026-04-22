#include <stdio.h>

int main() {
    char nome_item[5][50];
    float preco_unitario[5];
    int quantidade[5];
    float subtotal[5];

    float total = 0;
    int i;

    // Leitura dos dados
    for (i = 0; i < 5; i++) {
        printf("\nItem %d\n", i + 1);

        printf("Nome do item: ");
        scanf(" %[^\n]", nome_item[i]);

        printf("Preco unitario: ");
        scanf("%f", &preco_unitario[i]);

        printf("Quantidade comprada: ");
        scanf("%d", &quantidade[i]);

        // cálculo do subtotal
        subtotal[i] = preco_unitario[i] * quantidade[i];
        total += subtotal[i];
    }

    // Mostrar fatura
    printf("\n--- FATURA ---\n");
    for (i = 0; i < 5; i++) {
        printf("%s | %.2f x %d = %.2f\n",
               nome_item[i],
               preco_unitario[i],
               quantidade[i],
               subtotal[i]);
    }

    printf("\nTotal sem desconto: %.2f MT\n", total);

    // Aplicar desconto
    if (total > 1000) {
        float desconto = total * 0.10;
        float total_final = total - desconto;

        printf("Desconto aplicado (10%%): -%.2f MT\n", desconto);
        printf("Total final: %.2f MT\n", total_final);
    } else {
        printf("Nenhum desconto aplicado.\n");
    }

    return 0;
}
