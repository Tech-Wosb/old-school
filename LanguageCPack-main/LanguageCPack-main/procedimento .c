#include <stdio.h>
#include <conio.h>

int num=0;

void procedimento() {

    printf ("\nDIGITE UM NUMERO:");

}

void procedimento02 () {

    printf ("\nNUMERO DIGITADO: %d", num);

}

int main () {

    int recebeproc;

    procedimento();
    scanf ("%d", &num);
    procedimento02();

return 0;
}

