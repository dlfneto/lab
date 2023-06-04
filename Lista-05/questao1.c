#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){

    int op;
    float n1, n2, result;

    if(argc != 4){
        fprintf(stderr, "\nUsage: %s <number_1> <number_2> <op>\n", *argv);
        return 1;
    }

    n1 = atof(*(argv+1));
    n2 = atof(*(argv+2));
    op = atoi(*(argv+3));

    switch(op){
        case 0:
            result = n1+n2;
            break;
        case 1:
            result = n1-n2;
            break;
        case 2:
            result = n1*n2;
            break;
        case 3:
            result = n1/n2;
            break;
    }

    printf("Result: %.2f\n", result);

    return 0;
}