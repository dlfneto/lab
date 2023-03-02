#include <stdio.h>
#include <stdlib.h>

char * converter_binario(int x, int bits){
    char * numero_binario = (char *) malloc(sizeof(char) * bits);
    int comparador = 0b1 << (bits-1);
    for(int i = 0; i < bits; i++){
        *(numero_binario+i) = (x & (comparador >> i)) ? '1' : '0';
    }
    return numero_binario;
}

int main(){

    unsigned char x = 0, y = 0;

    printf("Insira o valor de X: ");
    scanf("%hhd", &x);

    do{
        printf("Insira o valor de Y: ");
        scanf("%hhd", &y);
    }while(y < 5 | y > 251);

    printf("\n+---------------------------------------------------+\n\n");

    for(int i = 1; i <= 8; i++){
        int novo_y = i > 4 ? y+(i-4) : y-(5-i);
        int substituindo_x = ((x >> (i-1)) & 0b1) > 0 ? novo_y | 0b1 : novo_y & 0b11111110;
        printf("Substituindo LSB de %d \t-> %s\t= %s\n", novo_y, converter_binario(novo_y, 8), converter_binario(substituindo_x, 8));
    }
 
    return 0;
}
