//BIBLIOTECAS
#include <stdlib.h>
#include <conio.h>


int main () {

    //VARIAVEIS
    int num1[10];
    int i = 0;
    int soma = 0;

    printf ("\nVamos ler um vetor!\n");


    for (i = 0; i <= 9; i++) {

     scanf ("%d", &num1[i]);

    }

    for ( i = 0; i<=9; i++) {

     printf ("\n%d", num1[i]);

    }

    for ( i = 0; i <=9; i++) {

     soma = soma + num1[i];

    }


    printf ("\nSoma dos valores do vetor:%d", soma);     

    getch();
    printf("\nFIM!\n");
    system ("PAUSE");
    return 0;
}





