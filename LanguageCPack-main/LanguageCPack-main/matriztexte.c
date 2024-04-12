#include <stdio.h>


int main () {

    //VARIAVEIS
    const int linhasize = 3;
    const int colunasize = 3;

    int Matrix [linhasize][colunasize]; 
    int i=0, j=0;

    printf("\nDIGITE UM NUMERO:\n");
    for (i; i < linhasize; i++){
        for (j; j < colunasize; j++){

            scanf ("%d", &Matrix [i][j]);

        }
    
    }

    for (i; i <linhasize; i++) {
        for (j; j<colunasize; j++) {

            printf ("%d", Matrix [i][j]);

        }

    }




return 0;
}