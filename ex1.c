// Cálculo de consumo de água

#include <stdio.h>

int main() {
    float consumo_de_agua, soma_consumo = 0, media_consumo;
    int morador = 1, consumo = 20;
    for (int morador = 1; morador <= 5; morador++) {
        printf("Digite o seu consumo de água em m³, morador %d: ", morador);
        scanf("%f", &consumo_de_agua);
        if (consumo_de_agua <= consumo) {
            printf("Seu consumo foi de %.2f m³ \n", consumo_de_agua);
            printf("Seu consumo está dentro de %d m³ \n", consumo);
        } else {
            printf("Seu consumo foi de %.2f m³ \n", consumo_de_agua);
            printf("Seu consumo está acima de %d m³ \n", consumo);
        }
        soma_consumo = soma_consumo + consumo_de_agua;
        media_consumo = soma_consumo / 5;
    }

    printf("A média de consumo dos moradores é: %.2f \n", media_consumo);

    return 0;
}