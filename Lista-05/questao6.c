#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

void generate_random_values(int * arr, int size, int range){
    for(int i = 0; i < size; i++)
        *(arr+i) = rand()%(range+1);
}
float average(int * arr, int size){
    float res = 0;
    for(int i = 0; i < size; i++) res +=  (float) *(arr+i)/size;
    return res;
}
float median(int * arr, int size){
    float res = 0;

    if(!(size%2)) res = (float) (*(arr+(size/2)) + *(arr+(size/2)-1)) / (float) 2;
    else res = *(arr + (size/2));

    return res;
}
int mode(int * arr, int size){
    int index = 0;
    int rep = 0;
    int old_rep = 0;
    for(int i = 0; i < size; i++){
        rep = 0;
        for(int j = 0; j < size; j++)
            if(*(arr + j) == *(arr + i)) rep++;

        if(rep > old_rep){
            index = i;
            old_rep = rep;
        }
    }
    if(old_rep > 1)
        return *(arr+index);
    return -1;
}
void print_array(int * arr, int size){
    printf("[");
    for(int i = 0; i < size; i++)
        printf("%d%s", *(arr+i), i != size-1 ? ", " : "]\n");
}

int main(int argc, char **argv){

    srand(time(NULL));

    int * array;
    int arr_size = 0;

    if(argc != 2){
        fprintf(stderr, "\nUsage: %s <array_size>\n", *argv);
        return 1;
    }

    arr_size = atoi(*(argv+1));
    array = (int *) malloc(sizeof(int) * arr_size);
    generate_random_values(array, arr_size, RANGE);

    printf("Array: ");
    print_array(array, arr_size);

    float media = average(array, arr_size);
    float mediana = median(array, arr_size);
    int moda = mode(array, arr_size);

    printf("\nMédia: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    if(moda != -1) printf("Moda: %d\n", moda);
    else printf("Moda: O conjunto acima é amodal!\n");

    return 0;
}