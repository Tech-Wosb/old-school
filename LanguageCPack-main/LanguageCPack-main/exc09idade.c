#include <stdio.h>

int main() {

int idade, anos, calcdias, armazenaanos; 

printf("\n-------------------------------------------\n");
printf("\tVAMOS CALCULAR SUA IDADE\n");
printf("\n-------------------------------------------\n");

getch();

printf ("\nQuantos anos voce tem?\n");
scanf ("%d", &idade);
// IDADE ARMAZENADA
printf ("So para confirmar!\nVoce tem %d anos?",idade);
printf ("\nPRESSIONE ENTER...");
getch();

printf("\n-------------------------------------------\n");
printf ("\tOK! AGORA VAMOS PARA OS CALCULOS\n");
printf("\n-------------------------------------------\n");
// ANO VIGENTE SUBTRAI IDADE E ARMAZENA
armazenaanos = 2018 - idade;
printf ("\nVoce nasceu em?\n%d", armazenaanos);
getch();
printf ("\nOK! Voce nasceu em \n%d e tem %d anos?\n", armazenaanos, idade);
printf ("\nPRESSIONE ENTER...\n");
getch();
printf ("\nPronto!Agora chega de brincadeira!\nPROMETO...\n");
//ANO DE NASCIMENTO SUBITRAIDO PELO ANO VIGENTE 
calcdias = 2018 - armazenaanos;
//IDADE MULTIPLICADA POR 365 DIAS
//AFIMAMOS UM ANO DE 365 DIAS 
calcdias = calcdias * 365;

printf ("\nPRONTO!\n Voce viveu aproximadamente %d dias", calcdias );

getch();
printf("\nFIM\n");
system ("PAUSE");
return (0);
}

