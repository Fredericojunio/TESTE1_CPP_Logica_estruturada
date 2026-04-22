#include <stdio.h>

int main() {
    float temp[7];
    char *dias[7] = {
        "Segunda", "Terca", "Quarta", "Quinta",
        "Sexta", "Sabado", "Domingo"
    };

    float soma = 0, media;
    float maior;
    int diaMaior = 0;

    // Leitura das temperaturas
    for (int i = 0; i < 7; i++) {
        printf("Digite a temperatura de %s: ", dias[i]);
        scanf("%f", &temp[i]);

        soma += temp[i];

        // inicializa o maior na primeira leitura
        if (i == 0 || temp[i] > maior) {
            maior = temp[i];
            diaMaior = i;
        }
    }

    // cálculo da média
    media = soma / 7;

    // resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Media semanal: %.2f\n", media);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Dia mais quente: %s\n", dias[diaMaior]);

    return 0;
}
