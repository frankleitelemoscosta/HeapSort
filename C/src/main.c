#include<stdlib.h>
#include<stdio.h>
#include"heapSort.h"
#include<time.h>

// Exemplo de uso
int main() {
    int n;
    scanf("%d",&n);
    int *arr;
    srand(time(NULL));
    arr=malloc(n * sizeof(int));
    clock_t inicio, fim;
    double tempo_de_uso_CPU;
    for(int i=0;i<n;i++){
       arr[i]=(rand()%1000);
    }
    inicio = clock(); 

    /*printf("Vetor original:\n");
    imprimirArray(arr, n);*/

    HeapSort(arr, n);

    /*printf("Vetor ordenado usando o Heap Sort:\n");
    imprimirArray(arr, n);*/

    // Captura o tempo de término
		fim = clock();

		tempo_de_uso_CPU = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

		printf("%.8f\n", tempo_de_uso_CPU);

    return 0;
}

//fim do código

/*
Neste código se divide o tamanho de um vetor inteiro pelo tamanho de apenas um elemento do vetor para encontrar o tamanho total
*/