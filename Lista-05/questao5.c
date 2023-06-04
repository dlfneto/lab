#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 100

void generate_random_float_values(float * arr, int size, int range){
    for(int i = 0; i < size; i++)
        *(arr+i) = ((float) rand() / (float) RAND_MAX) * range;
}
float sum_array(float * arr, int size){
    float sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(arr+i);
    return sum;
}
void print_float_array(float * arr, int size){
    printf("[");
    for(int i = 0; i < size; i++)
        printf("%.2f%s", *(arr+i), i != size-1 ? ", " : "]\n");
}

int main(int argc, char **argv){

    srand(time(NULL));

    float * array;
    int arr_size = 0;

    if(argc != 2){
        fprintf(stderr, "\nUsage: %s <array_size>\n", *argv);
        return 1;
    }

    arr_size = atoi(*(argv+1));
    array = (float *) malloc(sizeof(float) * arr_size);
    generate_random_float_values(array, arr_size, RANGE);

    printf("Array: ");
    print_float_array(array, arr_size);

    float sum = sum_array(array, arr_size);

    printf("\nSoma do vetor: %f\n", sum);

    return 0;
}