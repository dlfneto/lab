#include <stdio.h>

int main(){
    for(int i = 10; i <= 100; i+=10){
        printf("Temperatura: \t%dºC \t%dºF\n", i, ((9 * i + 160)/5));
    }
    return 0;
}