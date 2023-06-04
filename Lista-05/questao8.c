#include <stdio.h>
#include <stdlib.h>

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

    int D = 0, t = 0, *m, *s;

    printf("Insira a dimensão da matriz: ");
    scanf("%d", &D);

    printf("Insira o valor de t: ");
    scanf("%d", &t);

    m = (int *) malloc(sizeof(int) * D*D);
    s = (int *) malloc(sizeof(int) * D*D);

    generate_random_values(m, D*D, RANGE);


    int x = 0, y = 0;
    for(int i = 0; i < D*D; i++){
        if(i > 0 && i%D == 0){
            y++;
            x = 0;
        }
        *(s+i) = *(m+y*D+x) > t ? 1:0;
        x++;
    }
    print_matrix(m, D, D);
    print_matrix(s, D, D);

    return 0;
}