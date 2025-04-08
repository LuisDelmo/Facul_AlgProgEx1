#include <stdio.h>
#include <stdlib.h>

#define PRECODOHAMBURGER 25.00
#define PRECODAEMPADA 12.50
#define POUPANCA(x) ((x) * 0.12)

int main() {

    float empadasVendidas, hamburgeresvendidos;

    printf("Vendeu quantos hamburgueres?: ");
    scanf("%f", &hamburgeresvendidos);

    printf("Vendeu quantas empadas?: ");
    scanf("%f", &empadasVendidas);
    
    float totalVendido = (empadasVendidas * PRECODAEMPADA) + (hamburgeresvendidos * PRECODOHAMBURGER);

    printf("Vendeu no total R$ %.2f\n", totalVendido);
    printf("Rendeu na poupanca: R$ %.2f\n", POUPANCA(totalVendido));

    return 0;
}
