#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

class HeapSort {
public:
    // Constructor
    HeapSort(vector<int>& arr) : data(arr), size(arr.size()) {}

    // Function to perform heap sort
    void sort() {
        buildHeap();
        for (int i = size - 1; i > 0; i--) {
            swap(0, i);
            heapify(0, i);
        }
    }

    // Utility function to print the array
    void printArray() {
        for (int i = 0; i < size; ++i)
            cout << data[i] << " ";
        cout << endl;
    }

private:
    vector<int>& data;
    int size;

    // Helper function to build the heap
    void buildHeap() {
        for (int i = size / 2 - 1; i >= 0; i--)
            heapify(i, size);
    }

    // Helper function to perform heapify operation
    void heapify(int root, int heapSize) {
        int largest = root;
        int left = 2 * root + 1;
        int right = 2 * root + 2;

        if (left < heapSize && data[left] > data[largest])
            largest = left;

        if (right < heapSize && data[right] > data[largest])
            largest = right;

        if (largest != root) {
            swap(root, largest);
            heapify(largest, heapSize);
        }
    }

    // Helper function to swap two elements in the array
    void swap(int i, int j) {
        int temp = data[i];
        data[i] = data[j];
        data[j] = temp;
    }
};

int main() {
    int tam;
    cin>>tam;   
    vector<int> arr(tam);
    int N = tam;
    srand(time(NULL));
    clock_t inicio, fim;
    double tempo_de_uso_CPU;
    for(int i=0;i<tam;i++){
       arr[i]=(rand()%1000);
    }


    inicio = clock();

    /*cout << "Vetor original:" << endl;
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << endl;*/

    HeapSort heap(arr);

    heap.sort();

    //cout << "Vetor ordenado (HeapSort):" << endl;
    //heap.printArray();

    fim = clock();

    tempo_de_uso_CPU = ((double) (fim - inicio)) / CLOCKS_PER_SEC; // Calcula o tempo de execução em segundos

    printf("%.8f\n", tempo_de_uso_CPU);

    return 0;
}