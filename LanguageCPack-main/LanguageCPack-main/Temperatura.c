//BIBLIOTECAS EM C
#include <stdio.h>
#include <conio.h>

//INICIANDO PROGRAMA -> PROGRAMANDO EM MODULO
//DECLARANDO A FUNÇÃO
int calc_temp (float, float);
int main () {

    //VARIAVEIS
    float x=0, y=0; //RECEBE O VALOR EM fº E CONVERTE PARA cº -> X & Y
    float temp = calc_temp(x, y);

    printf ("\nTEMPERATURA!\n");

    printf ("\nDIGITE A TEMPERATURA EM F\n");
    scanf ("%f", &x);
    printf ("\nA TEMPERATURA DIGITADA %.2f ESTA CORRETA?\n", x);
    printf("\nPRESSIONE ENTER...\n");
    getch ();

    //CHAMANDA DA FUNÇÃO
    temp = calc_temp (x, y);
    printf("\nTEMPERATURA EM CELSIUS:%.2f\n", temp);

return 0;
}

//INICIANDO A FUNÇÃO -> MUDULARIZAÇÃO E PROCEDIMENTO
//PRECISO ACHAR C
int calc_temp (float f, float c) {

    c = (f-32) * 5/9;

    return (c); //RETORNANDO O VALOR DA FUNÇÃO PARA MAIN

}











