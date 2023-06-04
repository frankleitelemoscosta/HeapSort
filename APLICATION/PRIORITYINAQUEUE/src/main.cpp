#include<iostream>
#include"Fila.hpp"
#include"Read.hpp"
#include"heapSort.hpp"
#include<time.h>

using namespace std;

int main()
{
    Fila F;
    Item I;
    clock_t inicio, fim;
    double tempo_de_uso_CPU;
    int Size = 0;
    

    inicio = clock(); 

    printf("start queue:\n");
 

    //faz a leitura do arquivo de entrada e armazena os dados na fila
        ReadFile(&F);

    //imprimindo antes de ordenar
        FImprime(&F,&Size);

    //ordenando a fila
        HeapSort(&F);

    cout << "after ordination:"<<endl;

    string Ordination_vet[Size];

    F.first = F.first->prox;

    for(int i = (Size - 1) ; i > -1 ; i--)
    {
        Ordination_vet[i] = F.first->data.name;
        F.first = F.first->prox;
    }

    for(int i = 0 ; i < Size ; i++)
    {
        cout << Ordination_vet[i] << endl;
    }

    fim = clock();

    tempo_de_uso_CPU = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

    printf("Time of execution: %.8f seconds\n", tempo_de_uso_CPU);
    

    return 0;
}