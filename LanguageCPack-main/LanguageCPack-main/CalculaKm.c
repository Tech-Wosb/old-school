#include <stdio.h>
#include <conio.h>

int main () {

float distancia, tempo, velocidade, Lusados;

    printf ("\n\tCALCULE SUA VIAGEM!\n");
    printf ("\nPRESSIONE ENTER...\n");
    getch();
    printf ("\n-------------------------------------\n");
    printf ("\tPRECISAMOS DE ALGUNS DADOS!");
    printf ("\n-------------------------------------\n");

    printf ("\nQUANTO TEMPO LEVOU SUA VIAGEM?\n");
    scanf ("%f", &tempo);

    printf ("\nQUANTOS KM PERCORRIDOS?\n");
    scanf ("%f", &velocidade);

    distancia = tempo*velocidade;
    printf ("\n SUA DISTANCIA PERCORRIDA:%.2f", distancia);

    printf ("\nAGORA VAMOS PARA OS CALCULOS FINAIS\n");
    printf ("\n PRESSIONE ENTER...\n");
    getch();

    Lusados = distancia/12;

    printf ("\nA QUANTIDADE DE LITROS EM SUA VIAGEM FOI:\n\t%.2f", Lusados);

    getch();
    printf ("\nFIM\n");
    system("PAUSE");
    return (0);
}
