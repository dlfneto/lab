#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct pgm{
    unsigned w;
    unsigned h;
    int ** pixels;
    unsigned max_value;
} PGM;

void kill();

int PGM_create(PGM *, unsigned, unsigned, unsigned);
void PGM_random_generate(PGM *);
void PGM_show(PGM);

int main(int argc, char **argv){
    srand(time(NULL));
    unsigned w, h, mx;

    printf("Insira a largura: ");
    scanf("%u", &w);

    printf("Insira a altura: ");
    scanf("%u", &h);

    printf("Insira o valor máximo: ");
    scanf("%u", &mx);

    PGM image_01;
    
    if(!PGM_create(&image_01, w, h, mx)) kill();

    PGM_random_generate(&image_01);

    printf("\n\nPGM: \n\n");
    PGM_show(image_01);

    return 0;
}

void kill(){
    fprintf(stderr, "\nMemory Allocation Error!\n");
    exit(1);
}

int PGM_create(PGM * image, unsigned w, unsigned h, unsigned max_value){

    image->w = w;
    image->h = h;
    image->max_value = max_value;

    image->pixels = (int **) malloc(sizeof(int *) * image->h);
    if(!image->pixels) return 0;

    for(int i = 0; i < image->h; i++){
        *(image->pixels+i) = (int *) malloc(sizeof(int) * image->w);

        if(!*(image->pixels+i)){
            for(int j = i; j >= 0; j--)
                free(*(image->pixels+j));
            free(image->pixels);
            return 0;
        }

    }

    return 1;
}

void PGM_random_generate(PGM * image){
    for(int i = 0; i < image->h; i++)
        for(int j = 0; j < image->w; j++)
            *(*(image->pixels+i)+j) = rand()%(image->max_value+1);
}

void PGM_show(PGM image){
    printf("P2\n");
    printf("%d %d\n", image.w, image.h);
    printf("%d\n", image.max_value);
    for(int i = 0; i < image.h; i++){
        for(int j = 0; j < image.w; j++)
            printf("%*d", 4, *(*(image.pixels+i)+j));
        printf("\n");
    }
    printf("\n");
}