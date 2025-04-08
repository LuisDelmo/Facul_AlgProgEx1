#include <stdio.h>
#include <stdlib.h>



int main() {
    int aux;
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        printf("Digite o %d° numero",i + 1);
        scanf("%d", &aux);
        numeros[i] = aux;   
    }


    for(int i =0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1;j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }


    for(int i =0; i < 5; i++) {
        printf("\n %d numero", numeros[i]);
    }


    return 0;


}