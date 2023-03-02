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

    puts("+------------------------- Tabela ----------=---------------+");
    puts("Decimal\t|     Octal\t|   Hexadecimal\t|       Binario     |");
    puts("+-----------------------------------------------------------+");
    for(int i = 0; i <= 256; i++){
        printf("%d\t|\t%o\t|\t%x\t|\t%s   |\n", i, i, i, converter_binario(i, 9));
    }

    return 0;
}
