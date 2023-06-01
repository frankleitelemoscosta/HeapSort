#include<stdlib.h>
#include<stdio.h>
#include"heapSort.h"
#include<time.h>

// Exemplo de uso
int main() {

    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    clock_t inicio, fim;
    double tempo_de_uso_CPU;

    inicio = clock(); 

    printf("Vetor original:\n");
    imprimirArray(arr, n);

    HeapSort(arr, n);

    printf("Vetor ordenado usando o Heap Sort:\n");
    imprimirArray(arr, n);

    // Captura o tempo de término
		fim = clock();

		tempo_de_uso_CPU = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

		printf("Tempo de execução: %.8f segundos\n", tempo_de_uso_CPU);

    return 0;
}

//fim do código

/*
Neste código se divide o tamanho de um vetor inteiro pelo tamanho de apenas um elemento do vetor para encontrar o tamanho total
*/