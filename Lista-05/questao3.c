#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 40

int * get_min_number_address(int * array, int size){
    int * min = array;

    for(int i = 0; i < size; i++)
        if(*min > *(array+i)) min = array+i;

    return min;
}
int * get_max_number_address(int * array, int size){
    int * max = array;

    for(int i = 0; i < size; i++)
        if(*max < *(array+i)) max = array+i;

    return max;
}
int ** get_min_max(int * array, int size){
    int ** min_max = (int **) malloc(sizeof(int *) * 2);

    *min_max = get_min_number_address(array, size);
    *(min_max+1) = get_max_number_address(array, size);

    return min_max;
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

    int ** min_and_max = get_min_max(array, arr_size);
    printf("Menor número: %d | END: %p\n", **min_and_max, *min_and_max);
    printf("Menor número: %d | END: %p\n", *(*(min_and_max+1)), *(min_and_max+1));


    return 0;
}