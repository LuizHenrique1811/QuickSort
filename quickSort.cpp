#include <stdio.h>
#include <locale.h>


int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i + 1, high);
	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int array[10]=[3, 7, 10, 1, 5, 0, 8, 6, 2, 4];
	int p = sizeof(array) / sizeof(array[0]);
	int k;
	
	printf("\n Array Desordenado: ");
	printArray(array,p);
	
	quickSort(array,p);
	
	printf("\n Array Ordenado: ");
	printArray(array,p);
	
}