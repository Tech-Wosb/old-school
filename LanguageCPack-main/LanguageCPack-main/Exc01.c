//BIBLIOTECAS
#include <stdio.h>
#include <string.h>
#include <conio.h>


int main () {

    const int qtd = 10, tmMaxNome = 80;
    //Declarando Vetor
    char nome[qtd][tmMaxNome];
    char procuranome[tmMaxNome];


    printf ("\tLER NOMES!\n");

        for (int i=0; i<qtd; i++) {

            printf ("\nDigitar Nomes:\n");
            scanf ("%s", nome[i]);

        }

        printf ("\nProcurar um nome:\n");
        scanf ("%s", procuranome);

        for (int i=0; i<qtd; i++) {
            printf("comparando nome %s com nome %s com valor %d\n",
                procuranome, nome[i], strcmp(procuranome, nome[i]));
            
            if (strcmp(procuranome, nome[i]) == 0) {

                printf("\nACHEI\n");
                getch();
                return 0;

            }
        }

        procuranome [10];

    printf("\nNAO ACHEI\n");


getch();
printf("\nFIM!\n");
system ("PAUSE");
return 0;
}






