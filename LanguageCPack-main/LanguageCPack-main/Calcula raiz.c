//Calcular as raizes de uma equa��o do segundo grau.

#include <stdio.h>
#include <math.h>

int main () {

    float A, B, C, delta, x1, x2;

    printf("Calcule a raiz de uma equacao de segundo grau!\n");
    printf("Informe A, B, C\n");

    scanf ("%f", &A);
    scanf ("%f", &B);
    scanf ("%f", &C);

    delta = pow(B,2) -4 *A *C;
    x1 = (-B + pow(delta,0.5))/(2*A);
    x2 = (-B - pow(delta,0.5))/(2*A);
    printf("A raiz x1 eh: %.2f,\nA raiz x2 eh: %.2f\n", x1, x2);

    system("pause");
    printf("Fim");

    return (0);
}
