#include <stdio.h>
#include <stdlib.h>

int main() {
    char nP[50];
    int q;
    float pU, vT, vtd = 0.0;
    char op;

    printf("Programa de controle de vendas diarias.\n");

    op = 's';

    while (op == 's') {
        printf("Digite o nome do produto: ");
        scanf(" %[^\n]", nP);
        printf("Digite a quantidade vendida: ");
        scanf("%d", &q);
        printf("Digite o preco unitario do produto: ");
        scanf("%f", &pU);

        vT = q * pU;

        printf("Produto: %s\n", nP);
        printf("Valor total da venda do produto: R$ %.2f\n\n", vT);

        vtd += vT;

        printf("Deseja registrar outra venda? (s/n): ");
        scanf(" %c", &op);
    }

    printf("\nValor total arrecadado no dia: R$ %.2f\n", vtd);

    return 0;
}
