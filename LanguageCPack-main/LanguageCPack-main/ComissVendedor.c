#include <stdio.h>
#include <conio.h> // Trabalhando com teclado
#include <string.h> // Para facilitar a manipulacao de string


int main () {

int quantvendida;
float precopeca , venda;
float comissao; //= 0.05;
char nome[30] , codepeca[30];

//char nome[61] = {'M','a','t','h','e','u','s'};(ETUDO COM BASE EM VETOR)


//comunicaçao Usuario
printf("\n CALCULE A SUA COMISSAO!\n");
getch();
printf("\n VAMOS COMECAR?\n DIGITE ENTER!\n");
getch();
printf("\n PRECISAMOS SABER QUEM EH VOCE!\n Digite o Seu Nome:\n");

/*Utilizando o gets é um mode de abrir um espa�o para entrada de
um nome qualquer que vai ser armazenado na variavel nome, Sendo assim eu utilizei as bibliotecas String e Conio
Coloquei a variavel nome com char delimitei um espa�o de [61] e chamei a variavel com a fun��o gets, sendo assim qualquer valor
 que eu armazenar em nome sera exibido em printf */

gets(nome);
printf("\n O seu nome eh?\n%s", nome);
printf("\n PRESSIONE ENTER!\n");

getch();

//CONVERSANDO COM O USUARIO INTRUDUCAO DE VALORES

printf("\n PRONTO! AGORA VAMOS CALCULAR SUA COMISSAO!\n DIGITE O CODIGO DA PECA:\n");
scanf("%s",&codepeca);
printf("\n AGORA DIGITE O PRECO DA PECA:\n");
scanf("%f",&precopeca);
printf("\n AGORA DIGITE A QUANTIDADE VENDIDA: \n");
scanf("%d",&quantvendida);

printf("\nMUITO BEM! NOS JA ESTAMOS TERMINANDO!\n VAMOS CONFIRMAR SEUS DADOS?\n");

//IMPRIMINDO OS RESULTADOS NA TELA

printf("\n SEU NOME:%s", nome);
printf("\n O CODIGO DA PECA: %s", codepeca);
printf("\n O PRECO DA PECA:R$ %.2f", precopeca);
printf("\n A QUANTIDADE VENDIDA: %d", quantvendida);


printf("\nPRESSIONE ENTER...\n");

getch();

printf("\nFINALMENTE!\nNOSSOS ROBOS ESTAO CALCULANDO SUA COMISSAO!\n");
printf("\nPRESSIONE ENTER...\n");
getch();


//COMISSAO QUANRIDADE VENDIDA * PORCENTAGEM 5% DIVIDIDO POR 100 RESULTA O VALOR EM DINHEIRO
//QUANTVENDIDA*5%/100

printf("\n TUDO PRONTO!\n NOSSOS SUPER ROBOS JA CALCULARAM SUA COMISSAO\n");
printf("\nPRESSIONE ENTER...\n");
getch();


venda = (quantvendida*precopeca);
comissao = venda*0.05;

printf("\n SUA COMISSAO EH:\n%.2f", comissao);

getch();
printf("\nFIM\n");
system("PAUSE");
return (0);

}
