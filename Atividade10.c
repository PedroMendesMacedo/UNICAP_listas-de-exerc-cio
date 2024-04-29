#include <stdio.h>

int binarySearch(int arr[], int n, int x, int *iterations) {
    int esquerda = 0, direita = n - 1;
    *iterations = 0; 

    while (esquerda <= direita) {
        (*iterations)++; 
        int mid = esquerda + (direita - esquerda) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            esquerda = mid + 1;
        else
            direita = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 524384523;
    int iterations;

    int result = binarySearch(arr, n, target, &iterations);

    if (result != -1)
        printf("Elemento encontrado na posição %d\n", result);
    else
        printf("Elemento não encontrado\n");

    printf("Número de iterações: %d\n", iterations);

    return 0;
}