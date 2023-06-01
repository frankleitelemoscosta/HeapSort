#include"heapSort.h"

// Função auxiliar para imprimir o array
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função para trocar dois elementos
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função principal do Heap Sort
void HeapSort(int arr[], int n) {

    // Construir o heap máximo
    for (int i = n / 2 - 1; i >= 0; i--)
        ajustarHeapMax(arr, n, i);

    // Extrair elementos do heap um por um
    for (int i = n - 1; i > 0; i--) {
        // Mover a raiz atual para o final
        trocar(&arr[0], &arr[i]);

        // Chamar a função para ajustar o heap máximo na heap reduzida
        ajustarHeapMax(arr, i, 0);
    }
}

// Função para ajustar o heap máximo
void ajustarHeapMax(int arr[], int n, int i) {
    int maior = i;          // Inicializa o maior como raiz
    int esquerda = 2 * i + 1;    // Filho esquerdo
    int direita = 2 * i + 2;     // Filho direito

    // Se o filho esquerdo for maior que a raiz
    if (esquerda < n && arr[esquerda] > arr[maior])
        maior = esquerda;

    // Se o filho direito for maior que a raiz
    if (direita < n && arr[direita] > arr[maior])
        maior = direita;

    // Se o maior não for a raiz
    if (maior != i) {
        trocar(&arr[i], &arr[maior]);

        // Ajustar recursivamente a subárvore afetada
        ajustarHeapMax(arr, n, maior);
    }
}

/*
Esta implementação do método Heap sort possui uma função principal de onde as demais alterações ocorrem
a função de troca serve para construir o heap, sempre que o nó for análisado e houver um nó filha maior que um pai uma troca vai ocorrer
*/
