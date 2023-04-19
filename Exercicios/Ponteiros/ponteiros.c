#include <stdio.h>
#include <stdlib.h>

int main(){

    int vs[5] = {0, 1, 2, 3, 4};

    printf("&vs = %p, &vs[0] = %p, vs = %p\n", &vs, &vs[0], vs);

    for(int i = 0; i < 5; i++){
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    }

    /* USANDO MALLOC */

    puts("----------------- MALLOC -----------------");
    int *vh = (int *) malloc(5 * sizeof(int));

    printf("&vh = %p, &vh[0] = %p, vh = %p\n", &vh, &vh[0], vh);

    for(int i = 0; i < 5; i++){
        printf("&vh[%d] = %p, vh[%d] = %d\n", i, &vh[i], i, vh[i]);
    }

    return 0;
}