#include <stdio.h>

int main(){

    for(int i = 0; i <= 200; i++){
        if(i <= 100 && !(i%3)) printf(" %d", i);
        if(i >= 100 && !(i%5)) printf(" %d", i);
        if(i == 100 || i == 200) printf("\n");
    }

    return 0;
}
