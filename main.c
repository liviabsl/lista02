#include <stdio.h>
#include <stdlib.h>

int arr[] = {58, 23, 29, 10, 25, 11, 100};
int n = sizeof(arr)/sizeof(arr[0]);


int main()
{

    //DESCOMENTE A FUNÇÃO COM O MÉTODO QUE DESEJA UTILIZAR :)

    //bubbleSort(arr, n);
    //selectionSort(arr, n);
    //insertionSort(arr, n);

}



void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }

    printf("Array ordenado em bubbleSort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}




void selectionSort(int arr[], int n) {
    int i, j, minIndex, aux;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        aux = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = aux;
    }

    printf("Array ordenado em selectionSort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}




void insertionSort(int arr[], int n) {
    int i, j, aux;

    for (i = 1; i < n; i++) {
        aux = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > aux) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = aux;
    }

     printf("Array ordenado em insertionSort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
