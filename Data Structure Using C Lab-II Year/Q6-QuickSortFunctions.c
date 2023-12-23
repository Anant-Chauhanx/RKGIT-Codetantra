/*
Write a program to sort (Ascending order) the given elements using quick sort technique.
*/

#include <stdio.h>

void display(int arr[], int n) {
	for (int i = 0; i < n; i++) {
	    printf("%d ", arr[i]);
    }
	printf("\n");
}

int partition(int arr[], int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;
	            
	while (i < j) {
	    while (arr[i] <= pivot && i < high) {
	        i++;
	    }
	    while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            int temp = arr[i];
        	arr[i] = arr[j];
        	arr[j] = temp;
        }
    }
            
    arr[low] = arr[j];
    arr[j] = pivot;
                    
    return j;
 }
                        
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
