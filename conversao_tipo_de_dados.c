#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {


    //conversão explícita
    int idade = 26;
    float decimal = (float)idade;

    printf("Valor....: %.2f \n", decimal);

    int valor = 10;
    valor += 2;

    printf("Valor....: %d", valor);

    return 0;   

}