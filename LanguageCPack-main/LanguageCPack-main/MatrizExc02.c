//BIBLIOTECAS
#include <stdio.h>
#include <conio.h>


    int main () {

    //Declarando Vetor

    const int linhasize=5, colunasize=3;
    int matriz[linhasize][colunasize];


        for (int i=0; i < linhasize; ++i) {
            for (int j=0; j < colunasize; ++j) {

            matriz[i][j] = (i+1) * 10 + (j+1);

            }
        }

        for (int i=0; i<linhasize; ++i) {
            printf("|");
            for (int j=0; j<linhasize; ++j) {

            printf (" %3d ", matriz[i][j]);

            }

                printf ("|\n");

        }




    getch();
    printf("\nFIM!\n");
    system ("PAUSE");
    return 0;
}







