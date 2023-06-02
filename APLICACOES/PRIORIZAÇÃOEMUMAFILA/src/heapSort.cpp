#include"heapSort.hpp"
#include"Fila.hpp"
#include<iostream>

using namespace std;


void construirHeapMax(Fila *f) {
    Block* atual = f->first;
    while (atual != NULL) {
        ajustarHeapMax(f, atual, atual->prox);
        atual = atual->prox;
    }
}


void ajustarHeapMax(Fila *f, Block *pai, Block *filho) {
    if (filho == NULL)
        return;

    Block* maior = pai;
    if (pai->data.Weight < filho->data.Weight)
        maior = filho;

    if (maior != pai) {
        Item temp = pai->data;
        pai->data = maior->data;
        maior->data = temp;

        ajustarHeapMax(f, f->first, f->first->prox);  // Ajustar recursivamente a subárvore afetada
    }
}


void HeapSort(Fila *f) {
    construirHeapMax(f);

    int tamanho = 0;
    Block* atual = f->first;
    while (atual != NULL) {
        tamanho++;
        atual = atual->prox;
    }

    while (tamanho > 0) {
        Item item;
        Desenfileira(f, &item);

        cout << item.name <<endl;
        printf(" Age: %d, Weight: %d\n", item.age, item.Weight);
        tamanho--;
    }
}
//end code
