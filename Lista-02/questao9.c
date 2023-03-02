#include <stdio.h>

#define MAX 20

int main(){

    int termo_1 = 1,  termo_2 = 0, index = 1;

    while(index <= MAX){
        int proximo_termo = termo_2 + termo_1;
        termo_1 = termo_2;
        termo_2 = proximo_termo;
        printf("%d - %d\n", index, termo_2);
        index++;
    }
    
    return 0;
}
