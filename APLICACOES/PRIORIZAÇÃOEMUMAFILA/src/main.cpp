#include<iostream>
#include"Fila.hpp"
#include"Read.hpp"
#include"heapSort.hpp"

using namespace std;

int main()
{
    Fila F;

    //faz a leitura do arquivo de entrada e armazena os dados na fila
        ReadFile(&F);

    //imprimindo antes de ordenar
        FImprime(&F);

    //ordenando a fila
        HeapSort(&F);

    //imprimindo fila após ser ordenada
        FImprime(&F);

    return 0;
}