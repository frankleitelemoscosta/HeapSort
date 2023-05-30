#include<stdlib.h>
#include<stdio.h>
#include"heapSort.h"

// Exemplo de uso
int main() {

    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vetor original:\n");
    imprimirArray(arr, n);

    HeapSort(arr, n);

    printf("Vetor ordenado usando o Heap Sort:\n");
    imprimirArray(arr, n);

    return 0;
}

//fim do código

/*
Neste código se divide o tamanho de um vetor inteiro pelo tamanho de apenas um elemento do vetor para encontrar o tamanho total
*/