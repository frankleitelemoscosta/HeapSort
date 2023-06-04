#include<iostream>
#include"Fila.hpp"
#include"Read.hpp"
#include"heapSort.hpp"
#include<time.h>

using namespace std;

int main()
{
    Fila F;
    clock_t inicio, fim;
    double tempo_de_uso_CPU;

    inicio = clock(); 

    printf("fila original:\n");
 

    //faz a leitura do arquivo de entrada e armazena os dados na fila
        ReadFile(&F);

    //imprimindo antes de ordenar
        FImprime(&F);

    //ordenando a fila
        HeapSort(&F);

    cout << "após ordenar:"<<endl;

    //imprimindo fila após ser ordenada
        FImprime(&F);

    fim = clock();

    tempo_de_uso_CPU = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

    printf("Time of execution: %.8f seconds\n", tempo_de_uso_CPU);
    

    return 0;
}