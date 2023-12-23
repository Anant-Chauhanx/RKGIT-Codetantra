/*
Problem Statement: 
Write a program to implement circular queue using linked lists.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int element) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL) {
	    printf("Memory allocation failed. Circular queue is full.\n");
	    return;
	}
	        
    newNode->data = element;
	newNode->next = NULL;
	                
	if (rear == NULL) {
	    front = rear = newNode;
	    rear->next = front; 
	} else {
	    rear->next = newNode;
	    rear = newNode;
	    rear->next = front; 
	}
	                    
	  printf("Successfully inserted.\n");
}

void dequeue() {
	if (front == NULL) {
	    printf("Circular queue is underflow.\n");
	    return;
	}
	    
	struct Node* temp = front;
	    if (front == rear) {
	        front = rear = NULL;
	} else {
	        front = front->next;
	        rear->next = front; 
	}
	            
	  printf("Deleted value = %d\n", temp->data);
	  free(temp);
}

void display() {
	if (front == NULL) {
	    printf("Circular queue is empty.\n");
	    return;
    }
	    
	printf("Elements in the circular queue : ");
	struct Node* current = front;
	do {
	    printf("%d ", current->data);
	    current = current->next;
	} while (current != front);
	                
	printf("\n");
}

void isEmpty() {
	if (front == NULL) {
	    printf("Circular queue is empty.\n");
	} else {
	    printf("Circular queue is not empty.\n");
	}
}

void size() {
	int count = 0;
	if (front == NULL) {
	    printf("Circular queue size : 0\n");
	} else {
	    struct Node* current = front;
	    do {
	        count++;
	        current = current->next;
	    } while (current != front);
	        
	   printf("Circular queue size : %d\n", count); 
	}
}
