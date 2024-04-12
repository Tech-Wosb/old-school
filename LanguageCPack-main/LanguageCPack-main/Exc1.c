#include <stdio.h>


int main () {
    // Programa calcula entrada media de estoque e saida
    int estoquemedio = 0, quantminima = 0, quantmax = 0;

    printf("CALCULANDO NOSSO ESTOQUE EMPRESARIAL!\n");
    printf("DIGITE OS VALORES!\n");

    //PARA ADICIONAR DUAS OU MAIS VARIAVEIS EM APENAS UM SCANF
    //scanf("%d %d", &quantminima,&quantmax);

    printf("INFORME A QUANTIDADE MINIMA:\n");
    scanf("%d", &quantminima);
    printf("QUANTIDADE MINIMA:%d\n", quantminima );

    printf("INFORME A QUANTIDADE MAXIMA:\n");
    scanf("%d", &quantmax);
    printf("QUANTIDADE MAXIMA: %d\n", quantmax);
   
    estoquemedio=(quantminima+quantmax)/2;

    printf("\nEstoque medio eh:%d", estoquemedio);

    printf("\nFIM\n");
    system("PAUSE");

return(0);
}
