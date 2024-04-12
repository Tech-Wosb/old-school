#include <stdio.h>
#include <conio.h>

int main() {
    
float c, f;

printf ("\n\tTEMPERATURA\n");
printf ("\nVamos calcular a temperatura...\n");
getch();
printf ("\nLER TEMPERATURA EM CELSIUS E CONVERTER PARA FAHRENHEIT\n");

printf ("\n\tDIGITE A TEMPERATURA EM CELSIUS\n");
scanf ("%f", &c);

printf ("\n\tPRONTO! VAMOS CONVERTER A TEMPERATURA AGORA!\n");

f = (9 * c + 160)/5;

printf ("A TEMPERATURA EM FAHRENHEIT:\t%.2f", f);

getch();
printf("\nFIM\n");
system ("PAUSE");
return (0);
}













