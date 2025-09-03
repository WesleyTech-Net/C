#include <stdio.h>

int main() {

    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("O número digitado é positivo\n");
    } else if (numero < 0){
        printf("O número digitado é negativo\n");
    } else{
        printf("O número digitado é 0.\n");
    }

    return 0;
}