#include <stdio.h>

typedef struct estoque Estoque;
struct estoque{
    int _id;
    int n_pedido;
    char nomePeca[256];
    float preco;
};

int main(){
    
    Estoque peca1;

    printf("Insira o ID da peça: ");
    scanf("%d", &(peca1._id));
    printf("Insira o número do pedido: ");
    scanf("%d", &(peca1.n_pedido));
    printf("Insira o nome da peça: ");
    scanf("%s", peca1.nomePeca);
    printf("Insira o preço: ");
    scanf("%f", &(peca1.preco));

    return 0;
}