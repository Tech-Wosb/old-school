//BIBLIOTECAS EM C
#include <stdio.h>
#include <conio.h>

///INICIANDO PROGRAMA -> PROGRAMANDO EM MODULO
//DECLARANDO A FUNÇÃO
int fatorial (int);
int main () {

    //VARIAVEIS
    int n1;
    int valor = fatorial(n1);

    printf ("\nFATORIAL!\n");
    printf ("\nDIGITE UM NUMERO\n");
    scanf ("%d", &n1);

    //CHAMANDA DA FUNÇÃO
    valor = fatorial (n1);
    printf("\nFATORIAL:%d\n", valor);

    return 0;
}

//INICIANDO A FUNÇÃO -> MUDULARIZAÇÃO E PROCEDIMENTO
int fatorial (int fatc) {

    const int constFatorial = 1;
    int fat, n;

    for (fat=1; fat > constFatorial; n = n - 1) {
       
        fat = fat * n;
        fatc = fat;

    }

    return (fatc); //RETORNANDO O VALOR DA FUNÇÃO PARA MAIN

}












