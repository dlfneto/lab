#include <stdio.h>

int power(int x, int n){
    int result = x;
    for(int i = 1; i < n; i++)
        result *= x;
    return (n == 0) ? 1 : result;
}
int main(){
    for(int i = 0; i <= 7; i++){
        printf("3^%d = %d\n", i, power(3, i));
    }

    return 0;
}
