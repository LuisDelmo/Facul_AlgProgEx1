#include <stdio.h>
#include <stdlib.h>

int contadorDelitros() {
    int opcao;
    int litrosCounter = 0;

    printf("Bem vindo ao MEIO GOLE\n");
    while (1)
    {
        printf("\nOpcao 1:Lata 350ml\nOpcao 2:Garrafa 600ml\nOpcao 3:Garrafa 2L\nOpcao 4:Galao 5litrao\n-----------------------------\nOpcao 5:Fechar a conta");
        printf("\n\nEscolha sua opcao:");
        scanf("%d",&opcao);
        switch (opcao)
        {
            case 1:
                litrosCounter += 350;
                break;
            case 2:
                litrosCounter += 600;
                break;
            case 3:
                litrosCounter += 2000;
                break;
            case 4:
                litrosCounter += 5000;
                break;
            case 5:
                return litrosCounter;
        }

    }

}

int main() {
    
    int litrosbebidos = contadorDelitros();

    if (litrosbebidos >= 1000) {
        printf("TA doido mulecote bebeu logo %d litros",litrosbebidos);
    } else {
        printf("bebeu logo %d ml esperava mais",litrosbebidos);
    }
    
    return 0;

}