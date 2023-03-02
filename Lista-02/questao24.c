#include <stdio.h>

int main(){

    for(int i = 1; i < 500; i++){
        for(int j = 1; j < 500; j++){
            for(int k = 1; k < 500; k++){
                if((i*i) == (j*j + k*k))
                    printf("%d² = %d² + %d²\n", i, j, k);

                if((j*j + k*k) > (i*i)) break;
            }
        }
    }

    return 0;
}
