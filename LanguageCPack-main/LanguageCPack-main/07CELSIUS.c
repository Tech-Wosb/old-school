//Bibliotecas 
#include <stdio.h>
#include <conio.h>

int main() {

//Variaveis 
float c, f, converte;

printf ("\n\tTEMPERATURA\n");
printf ("\nVamos calcular a temperatura...\n");
getch();
printf ("\nLER TEMPERATURA EM FAHRENHEIT E CONVERTER PARA CELSIUS\n");

printf ("\n\tDIGITE A TEMPERATURA EM FAHRENHEIT\n");
scanf ("%f", &f);

printf ("\n\tPRONTO! VAMOS CONVERTER A TEMPERATURA AGORA!\n");

c = (f - 32) * 5/9;

printf ("A TEMPERATURA EM CELSIUS:\t%.2f", c);

getch();
printf ("\nFIM\n");
system ("PAUSE"); 
return (0);
}
