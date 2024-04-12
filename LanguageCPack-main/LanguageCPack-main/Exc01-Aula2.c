/* Calcular a hipotenusa de um triangulo retangulo,
dados como entrada dois catetos */

#include <stdio.h>
#include <math.h>

 int main () {

    float cateto1, cateto2, hipotenusa, soma;
    printf("Calcular a hipotenusa de um triangulo retangulo\n");
    scanf("%f", &cateto1);
    scanf("%f", &cateto2);

    soma = pow(cateto1,2) + pow(cateto2,2);
    hipotenusa = pow(soma,0.5);
    printf("hipotenusa eh: %f\n", hipotenusa);


    return (0);

}

