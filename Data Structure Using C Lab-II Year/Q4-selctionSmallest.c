/*
Problem Statement: 
Write a program to sort the given array elements using Selection sort smallest element method(Ascending order).
*/

#include <stdio.h>

void selectionSort(int arr[], int n) {
	int i, j, minIndex, temp;
	    
    for (i = 0; i < n - 1; i++) {
	    minIndex = i;
	        	        
	    for (j = i + 1; j < n; j++) {
	        if (arr[j] < arr[minIndex]) {
	        	minIndex = j;
	        }
	    }
	        
	    temp = arr[i];
	    arr[i] = arr[minIndex];
	    arr[minIndex] = temp;
    }
}

int main() {
	int n;
	    
	printf("n = ");
	scanf("%d", &n);
	            
	int arr[n];
	                
    for (int i = 0; i < n; i++) {
	     printf("a[%d] = ", i);
	     scanf("%d", &arr[i]);
    }
	                    
    printf("Before sorting : \n");
    for (int i = 0; i < n; i++) {
	    printf("a[%d] = %d\n", i, arr[i]);
}

    selectionSort(arr, n);
    
    printf("After sorting : \n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, arr[i]);
    }
            
    return 0;
}
