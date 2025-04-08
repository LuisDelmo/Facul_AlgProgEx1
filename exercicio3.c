#include <stdio.h>
#include <stdlib.h>

int main() {
    int aux;

    int max = __INT_MAX__;
    int min = -__INT_MAX__;

    for(int i = 0; i < 3; i++) {
        printf("Digite o %d° numero",i + 1);
        scanf("%d", &aux);
        
        if (aux < max) {
            max = aux;
        } else if (aux > min){
            min = aux;
        }
    }

    printf("menor %d |||| maior %d", max,min);

    return 0;

}