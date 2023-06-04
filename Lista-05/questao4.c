#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 1000


int get_min_number(int * array, int size){
    int min = *array;

    for(int i = 0; i < size; i++)
        if(min > *(array+i)) min = *(array+i);

    return min;
}
int get_max_number(int * array, int size){
    int max = *array;

    for(int i = 0; i < size; i++)
        if(max < *(array+i)) max = *(array+i);

    return max;
}
void generate_random_values(int * arr, int size, int range){
    for(int i = 0; i < size; i++)
        *(arr+i) = rand()%(range+1);
}
void normalize_array(float * arr2, int * arr, int size){
    int min = get_min_number(arr, size);
    int max = get_max_number(arr, size);

    for(int i = 0; i < size; i++)
        *(arr2+i) = (float) (*(arr+i) - min)/(max - min);
}
void print_array(int * arr, int size){
    printf("[");
    for(int i = 0; i < size; i++)
        printf("%d%s", *(arr+i), i != size-1 ? ", " : "]\n");
}
void print_float_array(float * arr, int size){
    printf("[");
    for(int i = 0; i < size; i++)
        printf("%.2f%s", *(arr+i), i != size-1 ? ", " : "]\n");
}

int main(int argc, char **argv){

    srand(time(NULL));

    int * array;
    float * array_2;
    int arr_size = 0;

    if(argc != 2){
        fprintf(stderr, "\nUsage: %s <array_size>\n", *argv);
        return 1;
    }

    arr_size = atoi(*(argv+1));
    array = (int *) malloc(sizeof(int) * arr_size);
    array_2 = (float *) malloc(sizeof(float) * arr_size);
    generate_random_values(array, arr_size, RANGE);

    printf("Array: ");
    print_array(array, arr_size);

    normalize_array(array_2, array, arr_size);

    printf("Array 2: ");
    print_float_array(array_2, arr_size);


    return 0;
}