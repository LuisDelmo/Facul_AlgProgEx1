#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Sem categoria (idade abaixo do mínimo).\n");
    }

    // gpt fez me recusei a fazer muito merda


    return 0;
}