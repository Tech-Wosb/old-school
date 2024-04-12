//BIBLIOTECAS
#include <stdio.h>
#include <conio.h>

int main () {

    //VARIAVEIS
    const int TAMANHO_DO_VETOR = 10; //CONSTANTE: Sempre TAMANHO_DO_VETOR SERA IGUAL "X"
    int num[TAMANHO_DO_VETOR]; //vetor
    int i = 0; //contador
    int valorMaior = 0;
    int indiceMaior = 0;


    printf ("\nVAMOS LER OS VETORES!\n");


    for (i = 0; i < TAMANHO_DO_VETOR; i++) {

     scanf ("%d", &num[i]);

    }

    printf ("\nCONFIRME OS VALORES DIGITADOS\n");

    for ( i = 0; i < TAMANHO_DO_VETOR; i++) {

     printf ("\n%d", num[i]);

    }

    printf ("\nPRESSIONE ENTER...\n");
    getch();
     
    valorMaior = num[0];

    for (i = 0; i < TAMANHO_DO_VETOR; i++) {

        if (num[i] > valorMaior) {

            valorMaior = num[i];

            indiceMaior = i; 

        }
    }
    


    printf ("\nO MAIOR VALOR ARMAZENADO EH:%d", valorMaior);     
    printf ("\nINDICE MAIOR EH:%d", indiceMaior);     

    getch();
    printf("\nFIM!\n");
    system ("PAUSE");
    return 0;
}






