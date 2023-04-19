#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RANGE 50

void PrintVector(unsigned v[], int t);

int main(){
    srand(time(NULL));

    unsigned vector[TAM];

    int i;
    for(i = 0; i < TAM; i++)
        vector[i] = rand()%RANGE;

    PrintVector(vector, TAM);

    for(i = 1; i <= TAM; i++){
        int j;
        int sorted = 0;

        for(j = 0; j < TAM-i; j++){
            if(vector[j+1] < vector[j]){
                vector[j]   = vector[j] ^ vector[j+1];
                vector[j+1] = vector[j] ^ vector[j+1];
                vector[j]   = vector[j] ^ vector[j+1];

                sorted++;
            }
            PrintVector(vector, TAM);
        }
        if(!sorted) break;
    }
    

    return 0;
}

void PrintVector(unsigned v[], int t){
    int i;
    for(i = 0; i < TAM; i++)
        printf(" %d%c", v[i], (i==t-1)?'.':',');
    printf("\n");
}