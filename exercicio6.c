#include <stdio.h>
#include <stdlib.h>


int main() {

    int codigo;
    float salario;
    int achou = 0;

    int funcionarios[5][2] = {
        {101, 5},
        {202, 8},
        {303, 10}
    };

    printf("Digite seu codigo de funcionario:\n");
    scanf("%d",&codigo);
    printf("Digite seu salario:\n");
    scanf("%f",&salario);

    for (size_t i = 0; i < sizeof(funcionarios); i++) {
        if (codigo == funcionarios[i][0]) {
            salario *= 1 + (funcionarios[i][1] / 100.0);
            achou = 1;
        }
    }

    if (achou == 0) {
        salario = salario * 1.02;
    }


    printf("%.2f", salario);

    return 0;
}