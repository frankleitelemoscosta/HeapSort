#include <iostream>
#include <vector>
#include<algorithm>

struct Registro {
    int chave;
    // Outros campos do registro...
};

// Função para comparar dois registros com base na chave
bool compararRegistros(const Registro& r1, const Registro& r2) {
    return r1.chave < r2.chave;
}

// Função para realizar o HeapSort em um vetor de registros
void heapSort(std::vector<Registro>& registros) {
    std::make_heap(registros.begin(), registros.end(), compararRegistros);
    std::sort_heap(registros.begin(), registros.end(), compararRegistros);
}

int main() {

    clock_t inicio, fim;
    double tempo_de_uso_CPU;

    inicio = clock(); 

    std::vector<Registro> registros = {
        {5},
        {2},
        {8},
        {1},
        {3}
    };

    std::cout<<"Antes do Heap"<<std::endl;

    // Imprimir os registros ordenados
    for (const Registro& registro : registros) {
        std::cout << registro.chave << " ";
    }
    std::cout << std::endl;

    // Ordenar os registros usando HeapSort
    heapSort(registros);

    std::cout<<"Após o Heap"<<std::endl;

    // Imprimir os registros ordenados
    for (const Registro& registro : registros) {
        std::cout << registro.chave << " ";
    }
    std::cout << std::endl;

    // Captura o tempo de término
		fim = clock();

		tempo_de_uso_CPU = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

		printf("Tempo de execução: %.8f segundos\n", tempo_de_uso_CPU);

    return 0;
}