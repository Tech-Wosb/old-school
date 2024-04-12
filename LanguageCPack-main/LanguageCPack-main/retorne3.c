#include <stdio.h>

int main (){

    int num = 0;
    int num1= 0;
    int resultado = 0;
    int i;


    printf("\n\tVAMOS BRINCAR DE NUMEROS\n");
    printf("\nQuantos numeros voce deseja inserir na soma?\n");

    scanf("%d", &num);

    for (i=1; i<=num;i++) {

        printf("\nDigite numero:\n");
        scanf("%d", &num1);
        resultado += num1;


    }

        printf("\nRESULTADO:\n%d", resultado);


return (0);
}
