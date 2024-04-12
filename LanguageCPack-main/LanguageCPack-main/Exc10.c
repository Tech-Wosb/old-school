#include <stdio.h>
#include <conio.h>

int main () {

int num1, num2; 

printf ("\n\tVAMOS BRINCAR COM OS NUMEROS!\n\t");
printf ("-----------------------------");
printf ("\nDIGITE O PIMEIRO NUMERO:");
scanf ("%d", &num1);
printf ("\nPIMEIRO NUMERO:\n%d", num1);
printf ("\nDIGITE O SEGUNDO NUMERO:");
scanf ("%d", &num2);
printf ("\nSEGUNDO NUMERO:\n%d", num2);

//IGUAL

if (num1==num2) {

    printf ("\nNUMEROS IGUAIS\n");

    }

else {

    printf("\nNUMEROS DIFERENTES\n");

    }   

//MAIOR OU MENOR

if (num1>num2) {

    printf ("\nPRIMEIRO NUMERO MAIOR QUE SEGUNDO");

    }

else {

    printf("\nPRIMEIRO NUMERO MENOR QUE SEGUNDO\n");

    }

//MAIOR OU IGUAL 

if (num1>=num2) {

    printf ("\nMAIOR OU IGUAL\n");

    }

else {

    printf("\nMENOR OU IGUAL\n");

    }



getch();
printf("\nFIM\n");
system ("PAUSE");
return (0);
}

