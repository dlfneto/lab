#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 40

int * get_least_number_address(int * array, int size){
    int * least = array;
    for(int i = 0; i < size; i++)
        if(*least > *(array+i)) least = array+i;
    return least;
}
void generate_random_values(int * arr, int size, int range){
    for(int i = 0; i < size; i++)
        *(arr+i) = rand()%(range+1);
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

    int * least_number = get_least_number_address(array, arr_size);
    printf("\nMenor número: %d | END: %p\n", *least_number, least_number);


    return 0;
}