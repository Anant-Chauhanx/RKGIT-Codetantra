/*
Problem Statement: 
Write a program to search a key element in the given array of elements using Binary search.
*/

#include <stdio.h>

int binary_search(int arr[], int n, int key) {
	int left = 0, right = n - 1;
	while (left <= right) {
	    int mid = left + (right - left) / 2;
	    if (arr[mid] == key)
	        return mid;
	    if (arr[mid] < key)
	        left = mid + 1;        
	        else            
	        right = mid - 1;    
		
	}    
	return -1;
	
}

void bubble_sort(int arr[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
	    for (int j = 0; j < n - i - 1; j++) {
	        if (arr[j] > arr[j + 1]) {
	            temp = arr[j];
	            arr[j] = arr[j + 1];
	            arr[j + 1] = temp;            
	        }        
	    	
	    }    
	}
	
}

int main() {
	int n, key;
	printf("n = ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Search key = ");
    scanf("%d", &key);
                        
    bubble_sort(arr, n);
                            
    printf("After sorting :\n");
    for (int i = 0; i < n; i++) {        
    	printf("a[%d] = %d\n", i, arr[i]);
    }
                                    
    int result = binary_search(arr, n, key);
    if (result == -1) {        
    	printf("Key %d is not found in the array.\n", key);
    } else {        
    	printf("Key %d is found at position %d.\n", key, result);
    }
                                            
    return 0;
}
