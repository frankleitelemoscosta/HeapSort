#include"heapSort.hpp"
#include"Fila.hpp"
#include<iostream>
#include<string>

using namespace std;


void construirHeapMax(Fila *f) {

    Block* atual = f->first;

    atual = atual->prox;
      
    while (atual != NULL) 
    {  

        if(atual->prox != NULL)
        {
            ajustarHeapMax(f, atual, atual->prox);
        }
        atual = atual->prox;
        
    }
}


void ajustarHeapMax(Fila *f, Block *pai, Block *filho) {
    
    if (filho == NULL)
        return;

    
    Block* maior = pai;
    if (pai->data.Weight < filho->data.Weight) maior = filho;

    
    if (maior != pai) {

        Item temp = pai->data;
        pai->data = maior->data;
        maior->data = temp;

        ajustarHeapMax(f, maior, maior->prox); // Corrigido para usar maior->prox
    }
}



void HeapSort(Fila *f) {

    construirHeapMax(f);

}
//end code
