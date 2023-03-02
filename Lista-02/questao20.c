#include <stdio.h>

int fatorial(int x){
    for(int i = x-1; i > 0; i--){
        x *= i;
    }
    return (x == 0) ? 1:x;
}
int main(){

    for(int i = 0; i <= 10; i++)
        printf("%d! = %d\n", i, fatorial(i));

    return 0;
}
