#include <stdio.h>

int main(){
    
    for(int i = 15; i <= 90; i++)
        if(!(i%4)) printf(" %d", i);
    printf("\n");

    return 0;
}
