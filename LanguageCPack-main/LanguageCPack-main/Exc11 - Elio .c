#include <stdio.h>
#include<math.h>

float calc_imc (float, float);
int main (){

    //VARIAVEIS 
    float peso, altura;
    float rec_imc = calc_imc (peso, altura); 

    printf ("\tCALCULANDO IMC!\n");
    printf ("\nDigite seu peso (Kg):");
    scanf ("%f", &peso);

    printf ("\nDigite sua altura:");
    scanf("%f", &altura);

    //CHAMANDO FUNCAO
    rec_imc = calc_imc(peso, altura);
    printf ("\nIMC: %.2f", rec_imc);

return (0);
}

//FUNCAO
float calc_imc (float p, float a ) {

    
    return p / pow(a,2.0); //RETORNANDO VALORES
   

}
