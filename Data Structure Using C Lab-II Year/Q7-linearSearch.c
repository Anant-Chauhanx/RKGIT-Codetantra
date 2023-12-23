/*
Problem Statement: 
Write a program to search a key element within the given array of elements using Linear search process.
*/

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
	for (int i = 0; i < n; i++) {
	     if (arr[i] == key) {
	    	 return i;
	    }
	}
	return -1;
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

    printf("Search key : ");
    scanf("%d", &key);
        
    int result = linearSearch(arr, n, key);
            
    if (result != -1) {
        printf("Key %d is found at position %d.\n", key, result);
    } else {
        printf("Key %d is not found.\n", key);
    }
                
    return 0;
}
