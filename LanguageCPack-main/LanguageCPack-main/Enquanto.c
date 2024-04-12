//BIBLIOTECAS
#include <stdio.h>


int main() {

    int numero = 1; 


    printf ("\nDigite numero:\n");
    scanf ("%d", &numero);


        if (numero <=0 ) {

            printf ("\nNUMERO INVALIDO!\n");

        } else { 
                
            while (numero <= 100 ) {
            printf ("\n\n%d", numero);
            printf ("\nNumero multiplo de 10\n%d", numero);
            numero += +1;
                }



    }


    return 0;
}

