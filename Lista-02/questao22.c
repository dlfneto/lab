#include <stdio.h>


int main(){

    int numero = 0, contador = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i*=10){
        if(numero/(i) - 10 * (numero/(i*10)) == 7) contador++;
    }

    printf("Nesse numero há %d algarismos 7.\n", contador);
 
    return 0;
}
