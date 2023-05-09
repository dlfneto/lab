#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 10

void kill();
void print_matrix(int **, int, int);
void generate_random_values(int **, int, int);
int allocate_matrix(int ***, int, int);

int main(int argc, char **argv){
	srand(time(NULL));

	int rows = 3, cols = 3;
	int ** matriz_1, ** matriz_2, **matriz_3;

	/* 
		Pegando argumentos da linha de comando */
	if(argc > 1 && atoi(*(argv+1)) > 0){
		rows = atoi(*(argv+1));
		cols = atoi(*(argv+1));
	}

	/*
		Alocando memória dinamicamente */
	if(!allocate_matrix(&matriz_1, rows, cols))
		kill();
	if(!allocate_matrix(&matriz_2, rows, cols))
		kill();
	if(!allocate_matrix(&matriz_3, rows, cols))
		kill();

	/*
		Gerando valores pseudoaleátorios
		para as matrizes 1 e 2 */
	generate_random_values(matriz_1, rows, cols);
	generate_random_values(matriz_2, rows, cols);


	/*
		Multiplicando os elementos
		das matrizes 1 e 2 */
	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			*(*(matriz_3+i)+j) = *(*(matriz_1+i)+j) * (*(*(matriz_2+i)+j));

	/*
		Imprimindo matrizes */
	puts("Matriz 1: ");
	print_matrix(matriz_1, rows, cols);

	puts("Matriz 2: ");
	print_matrix(matriz_2, rows, cols);

	puts("Multi. Ponto a Ponto: ");
	print_matrix(matriz_3, rows, cols);


	/*
		Desalocando memória utilizada */
	for(int i = 0; i < rows; i++){
		free(*(matriz_1+i));
		free(*(matriz_2+i));
		free(*(matriz_3+i));
	}

	free(matriz_1);
	free(matriz_2);
	free(matriz_3);

	return 0;
}


void print_matrix(int ** matrix, int rows, int cols){
	for(int i = 0; i < rows; i++){
		printf("|");
		for(int j = 0; j < cols; j++){
			printf("%d%c", *(*(matrix+i)+j), j == cols-1 ? ' ':'\t');
		}
		printf("|\n");
	}
	printf("\n");
}

void generate_random_values(int ** matrix, int rows, int cols){
	for(int i = 0; i < rows; i++)
		for(int j = 0; j < cols; j++)
			*(*(matrix+i)+j) = rand()%RANGE;
}

int allocate_matrix(int *** matrix, int rows, int cols){

	*matrix = (int **) malloc(sizeof(int *) * rows);
	if(!(*matrix)) return 0;

	for(int i = 0; i < rows; i++){
		*(*matrix+i) = (int *) malloc(sizeof(int) * cols);
		if(!(*(*matrix+i))) return 0;
	}

	return 1;
}

void kill(){
	fprintf(stderr, "\nError to allocate memory!\n\n");
	exit(1);
}