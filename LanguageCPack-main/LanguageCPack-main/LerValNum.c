//BIBLIOTECAS
#include <stdio.h>
#include <math.h>
#include <conio.h>

//Comecando o codigo
//vamos intruduzir as variaveis lembrando que serao 12 execuções
//6 combinações de multiplicação
//6 combinações de soma

int main () {
//VARIAVEIS

int num1, num2, num3, num4, soma, multiplicacao;

printf("\n BRINCANDO COM OS NUMEROS!\n");
getch();
printf("\nDIGITE O PRIMEIRO NUMERO:\n");
scanf("%d",&num1);
printf("\nDIGITE O SEGUNDO NUMERO:\n");
scanf("%d",&num2);
printf("\nDIGITE O TERCEIRO NUMERO:\n");
scanf("%d",&num3);
printf("\nDIGITE O QUARTO NUMERO:\n");
scanf("%d",&num4);

printf("\nPRONTO! AGORA VAMOS PARA O CALCULO!\nPRESSIONE ENTER...\n");
getch();
printf("\nSOMA!\n");

soma = num1 + num2;
printf("\nSOMA NUMERO:\n%d", soma);
soma = num1 + num3;
printf("\nSOMA NUMERO:\n%d", soma);
soma = num1 + num4;
printf("\nSOMA NUMERO:\n%d", soma);
soma = num2 + num3;
printf("\nSOMA NUMERO:\n%d", soma);
soma = num2 + num4;
printf("\nSOMA NUMERO:\n%d", soma);
soma = num3 + num4;
printf("\nSOMA NUMERO:\n%d", soma);

printf("\nPRONTO\nPRESSIONE ENTER...\n");
getch();
printf("\nAGORA VAMOS PARA MULTIPLICACAO\n");
getch();
multiplicacao = num1 * num2;
printf("\nMULTIPLICACAO NUMERO:\n%d", multiplicacao);
multiplicacao = num1 * num3;
printf("\nMULTIPLICACAO NUMERO:\n%d", multiplicacao);
multiplicacao = num1 * num4;
printf("\nMULTIPLICACAO NUMERO:\n%d", multiplicacao);
multiplicacao = num2 * num3;
printf("\nMULTIPLICACAO NUMERO:\n%d", multiplicacao);
multiplicacao = num2 * num4;
printf("\nMULTIPLICACAO NUMERO:\n%d", multiplicacao);
multiplicacao = num3 * num4;
printf("\nMULTIPLICACAO NUMERO:\n%d", multiplicacao);
getch();
printf("\nTUDO PREONTO!\nMUITO OBRIGADO POR NOS ESCOLHER\n");
printf("\nPRESSIONE ENTER...\n");

getch();

printf("\nFIM\n");
system("PAUSE");

return (0);
}




