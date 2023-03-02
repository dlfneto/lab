#include <stdio.h>

#define MAX 100000
int main(){

    double pi = 4;
    for(int i = 0; i <= MAX; i++){
        if(!(i%2))
            pi -= (double) 4/(i*2+3);
        else 
            pi += (double) 4/(i*2+3);
        printf("π = %.10f\n", pi);
    }

    return 0;
}
