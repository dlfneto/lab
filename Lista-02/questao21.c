#include <stdio.h>


int main(){

    int numero = 0;

    printf("Insira um numero de 5 digitos: ");
    scanf("%d", &numero);
    while(getchar() != '\n') continue;

    while(numero < 10000 || numero > 99999){
        printf("\nSão permitidos apenas numeros de 5 digitos!\n\n");
        printf("Insira um numero de 5 digitos: ");
        scanf("%d", &numero);
        while(getchar() != '\n') continue;
    }
    
    int palindromo = 1;
    if(numero/10000 != numero - 10 * (numero/10)){
        palindromo = 0;
    }
    if(numero/1000 - 10 * (numero/10000) != (numero/10) - 10 * (numero/100)){
        palindromo = 0;
    }
    if(palindromo) printf("O numero %d é um palindromo!\n", numero);
    else printf("O numero %d não é um palindromo!\n", numero);

    return 0;
}
