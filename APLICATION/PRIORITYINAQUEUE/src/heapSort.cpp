#include"heapSort.hpp"
#include"Fila.hpp"
#include<iostream>

using namespace std;


void construirHeapMax(Fila *f) {
    Block* atual = f->first;
    while (atual != NULL) {
        if(atual->prox != NULL)
        {
            ajustarHeapMax(f, atual, atual->prox);
        }else{

        }
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

}
//end code
