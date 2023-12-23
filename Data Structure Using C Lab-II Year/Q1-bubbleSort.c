/*
Problem Statement: 
Write a program to sort the given elements using Bubble sort technique(Ascending order).
*/

#include <stdio.h>

void bubbleSort(int arr[], int n) {
	int temp, swapped;
	    
	do {
	    swapped = 0;
	        	        
	    for (int i = 1; i < n; i++) {
	        if (arr[i - 1] > arr[i]) {
	        temp = arr[i - 1];
	        arr[i - 1] = arr[i];                
	        arr[i] = temp;                
	        swapped = 1;            
	        	
	        }        
	    	
	    }    
		
	} while (swapped);
}

int main() {
    int n;
	        
    printf("n : ");
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
                        
    bubbleSort(arr, n);
                                
    printf("After sorting : \n");
    for (int i = 0; i < n; i++) {        
    	printf("a[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
	
}
