//BIBLIOTECAS EM C
#include <stdio.h>
#include <conio.h>

//INICIANDO PROGRAMA -> PROGRAMANDO EM MODULO
//DECLARANDO A FUNÇÃO
int calc_media (float, float);
int main () {

    //VARIAVEIS
    float x, y;
    float media = calc_media(x, y);

    printf ("\nSOMANDO MEDIA!\n");
    printf ("\nDIGITE O PRIMEIRO NUMERO\n");
    scanf ("%f", &x);
    printf ("\nDIGITE O SEGUNDO NUMERO\n");
    scanf ("%f", &y);

    //CHAMANDA DA FUNÇÃO
    media = calc_media (x, y);
    printf("\nO CALCULO DA MEDIA EH:%.2f\n", media);

return 0;
}

//INICIANDO A FUNÇÃO -> MUDULARIZAÇÃO E PROCEDIMENTO
int calc_media (float num1, float num2) {
    
    return (num1 + num2)/2; //RETORNANDO O VALOR DA FUNÇÃO PARA MAIN

}











