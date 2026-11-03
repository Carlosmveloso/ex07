#include <stdio.h>

int main() {
    float media, nota, resultado = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Digite a avaliação entre (0 e 10) do clinte %d: ", i);
        scanf("%f", &nota);
        printf("Nota: %.2f \n", nota);
        resultado += nota;        
        printf("%.2f \n", resultado);
    }
    media = resultado / 10;

    if(media >= 7) {
        printf("Sua média é de %.2f continue assim! \n", media);
    } else {
        printf("Alerta! Sua média é de %.2f, melhore o atendimento ao cliente. \n", media);
    }
}