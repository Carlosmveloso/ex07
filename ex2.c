// Juntar dinheiro para o cofrinho
#include <stdio.h>

int main(void) {
    double cofrinho = 0;
    double valor1 = 0.50;
    double valor2 = 1;
    double valor3 = 2;
    char rep;
    int rodando = 1;

    printf("=== Meu cofrinho ===\n");
    while (rodando) {
        printf("Meu saldo = %.2f\n", cofrinho);
        printf("Digite 1 para adicionar R$ %.2f centavos\n", valor1);
        printf("Digite 2 para adicionar R$ %.2f real\n", valor2);
        printf("Digite 3 para adicionar R$ %.2f reais\n", valor3);
        printf("Digite 4 para parar de adicionar\n");
        printf("Escolha sua opção: ");
        scanf(" %c", &rep);

        switch (rep) {
            case '1':
                printf("Você adicionou R$ 0.50 centavos\n");
                cofrinho += valor1;
                printf("-------------------------------\n");
                break;
            case '2':
                printf("Você adicionou R$ 1.00 real\n");
                cofrinho += valor2;
                printf("--------------------------\n");
                break;
            case '3':
                printf("Você adicionou R$ 2.00 reais\n");
                cofrinho += valor3;
                printf("--------------------------\n");
                break;
            case '4':
                printf("Você saiu do programa. Seu saldo no porquinho é R$ %.2f reais\n", cofrinho);
                printf("-----------------------------------------------------------\n");
                rodando = 0;
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}