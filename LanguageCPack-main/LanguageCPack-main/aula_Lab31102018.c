#include<stdio.h>

int t = 3;

void multiplica(int a[][t], int b[][t], int c[][t]){
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            int res = 0;
            for(int k=0; k<t; ++k){
                res+=a[i][k]*b[k][j];
            }
            c[i][j] = res;
        }
    }
}
void imprime(int a[][t]){
    for(int i=0; i<t; i++){
        for(int j=0; j<t; j++){
            for(int k=0; k<t; ++k){
            }
        }
    }
}

int main(){

    int a[t][t],b[t][t],c[t][t];
    int i,j;

    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
           printf("DIGITE O NUMERO: %d, %d,\n", i,j);
           scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<t; i++){
        for(j=0; j<t; j++){
           printf("DIGITE O NUMERO: %d, %d,\n", i,j);
           scanf("%d",&b[i][j]);
        }
    }
    multiplica(a, b, c);
    for(i=0; i<=2; i++){
        printf("| ");
        for(j=0; j<=2; j++){
            printf(" %4d ", a[i][j]);
        }
        printf(" | * ");
        printf("| ");
        for(j=0; j<=2; j++){
            printf(" %4d ", b[i][j]);
        }
        printf(" | = ");
        printf("| ");
        for(j=0; j<=2; j++){
            printf(" %4d ", c[i][j]);
        }
        printf(" |\n");
    }

    return 0;
}
