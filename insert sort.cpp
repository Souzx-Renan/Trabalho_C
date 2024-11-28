#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, j, chave;
    
    // Comeca do segundo elemento (indice 1)
    for (i = 1; i < n; i++) {
        chave = arr[i];  // O elemento a ser inserido na parte ordenada
        j = i - 1;

        // Move os elementos maiores que a chave para a direita
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        // Coloca a chave na posicao correta
        arr[j + 1] = chave;
    }
}

void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Definindo o vetor de numeros para ordenacao
    int arr[] = {10, 43, 3, 99, 14}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Vetor antes da ordenacao: ");
    imprimirVetor(arr, n);  // Imprime o vetor antes de ordenar

    // Ordena o vetor usando Insertion Sort
    insertionSort(arr, n);  

    printf("Vetor apos a ordenacao: ");
    imprimirVetor(arr, n);  // Imprime o vetor apos a ordenacao

    return 0;
}

