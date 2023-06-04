#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 40

void generate_random_values(int * arr, int size, int range){
    for(int i = 0; i < size; i++)
        *(arr+i) = rand()%(range+1);
}
void print_matrix(int * arr, int w, int h){
    printf("|");
    int x = 0, y = 0;
    for(int i = 0; i < w*h; i++){
        if(i > 0 && (i%w) == 0){
            y++;
            x = 0;
            printf("|\n|");
        }

        printf("%*d", 4, *(arr+i));
        x++;
    }
    printf("|\n\n");
}

int main(){

    int D = 0, *m;

    srand(time(NULL));

    printf("Insira a dimensão da matriz: ");
    scanf("%d", &D);

    m = (int *) malloc(sizeof(int) * D*D);

    if(!m){
        fprintf(stderr, "Error to allocate memory!\n");
        return 1;
    }

    generate_random_values(m, D*D, RANGE);

    int sum = 0;
    for(unsigned long int i = 0, x = 0; i < D*D; i += (((i+1)%D)*D), x++){
        sum += *(m + i + x);
    }

    printf("\n");
    print_matrix(m, D, D);

    printf("Soma da diagonal principal: %d\n", sum);
    printf("A soma é %s\n", (sum%2) ? "ímpar":"par");

    return 0;
}