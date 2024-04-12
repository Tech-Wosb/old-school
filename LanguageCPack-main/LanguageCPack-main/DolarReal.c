#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // getch

int main () {

float Dolar, Real, Cotass/*,opcao*/;

//Cotação do dolar atual
    Cotass=4.05; // Atribui o valor de 4,05 reais a variavel

    printf("SAIBA O VALOR DO DOLAR EM REAL!\n");
    printf("\n DIGITE O VALOR EM DOLAR:\n");
    scanf("%f", &Dolar);

    printf("\n O VALOR DO DOLAR EH?:\n%.2f", Dolar);
    printf("\nPrecione ENTER!");
    getch();
    printf("\nAGUARDE...\n");
    getch();
    printf("\n NOSSOS ROBOS SUPER PODEROSOS ESTAO\n CONVERTENDO O SEU VALOR!\n");
    getch();

    Real = Dolar * Cotass;


    printf("\nPRONTO! PRECIONE ENTER!");
    getch();
    printf("\nO VALOR EM REAL EH:\n%.2f", Real);
    getch();


    //getch(); aDICIONADO APENAS PARA O SYSTEM PAUSE PULAR DE LINHA!


    //Dolar*Cotass = Real

    /*if (Dolar*Cotass==Real/1){

        printf("PRONTO!");
        getch();
        printf("O VALOR EM REAL EH: \n%,2f", Real);

    }
*/

//TENTATIVA DE CRIAR UMA ESTRUTURA DE TRUE E FALSE
   /* do{

     printf("\n O VALOR DO DOLAR EH?:%.2f\n", Dolar);
     printf("COMFIRME COM Y/N!");


      scanf("%f",&opcao);  // Verificação do usuário

    // Se o usuário disser "s" o loop continua e seu programa volta a ser executado de novo

    }
    while(opcao == 's');*/

getch();
return (0);

}
