#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro entre 1 e 9: ");
    scanf("%d", &valor);

    if (valor >= 1 && valor <= 9) {
        printf("O valor está na faixa permitida.\n");
    } else {
        printf("O valor está fora da faixa permitida.\n");
    }


    // gpt fez me recusei a fazer muito merda de novo

    return 0;
}
