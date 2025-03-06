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

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int array[25]={10,9,8,7,6,5,4,55,77,88,22,33,45,44,77,8,5,1,4,56,3,2,1};
	int p = sizeof(array) / sizeof(array[0]);
	int k;
	
	quickSort(array,p);
	
	for (k =0; k < p; k ++){
		printf("%i",array[k]);
	}
	
	
}