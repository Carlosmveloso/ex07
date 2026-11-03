#include <stdio.h>

int main() {
    int passos, total = 0, horas = 0;

    while (total < 10000) {
        printf("Passos na hora %d: ", horas + 1);
        scanf("%d", &passos);

        total += passos;
        horas++;
    }

    printf("Meta atingida em %d hora(s). Total: %d passos.\n", horas, total);
    return 0;
}