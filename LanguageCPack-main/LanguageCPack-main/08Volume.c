//Bibliotecas 
#include <stdio.h>
#include <conio.h>


int main() {

//Variaveis 
float R, V, A;
char nomeVolume[30];

printf ("\n\tCALCULAR VOLUME\n");
getch();
printf ("\nINSIRA SEU CALCULO\n");
printf ("\nQUAL PRODUTO VOCE GOSTARIA DE CALCULAR?\n");

gets(nomeVolume);
printf("\nESSE EH O VOLUME SELECIONADO?\n%s", nomeVolume);
printf("\n PRESSIONE ENTER...\n");
getch();

printf("\nDIGITE O RAIO\n");
scanf ("%f", &R);
printf("\nCONFIRME O VALOR DO RAIO\n%.2f", R);

printf("\nDIGITE A ALTURA\n");
scanf ("%f", &A);
printf("\nCONFIRME O VALOR DA ALTURA\n%.2f", A);
getch();

//inicio de processamento 
printf("\nOK! VAMOS CALCULAR O VOLUME\n");
printf("\nPRESSIONE ENTER...\n");
getch();

V = 3.14159 * R * R * A;

printf("\nVOLUME CALCULADO:\n%.2f", V);

getch();
printf ("\nFIM\n");
system ("PAUSE"); 
return (0);
}

