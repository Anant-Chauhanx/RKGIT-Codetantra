/*
Problem Statement: 
Write a program to implement queue using linked lists.
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
	    printf("Memory allocation failed. Queue is full.\n");
	    return;
	}
	        
	newNode->data = element;
	newNode->next = NULL;
	                
	if (rear == NULL) {
	    front = rear = newNode;
	} else {
	    rear->next = newNode;
	    rear = newNode;
	}
	printf("Successfully inserted.\n");
}

void dequeue() {
	if (front == NULL) {
	    printf("Queue is underflow.\n");
	    return;
	}
	    
	struct Node* temp = front;
	front = front->next;
	            
	if (front == NULL) {
	    rear = NULL;
    }
	                
	printf("Deleted value = %d\n", temp->data);
	free(temp);
}

void display() {
	if (front == NULL) {
	    printf("Queue is empty.\n");
	    return;
    }
	    
	printf("Elements in the queue : ");
	struct Node* current = front;
	while (current != NULL) {
	    printf("%d ", current->data);
	    current = current->next;
	}
	printf("\n");
}

void isEmpty() {
	if (front == NULL) {
	    printf("Queue is empty.\n");
	} else {
	    printf("Queue is not empty.\n");
	}
}

void size() {
	int count = 0;
	struct Node* current = front;
	while (current != NULL) {
	    count++;
	    current = current->next;
	}
	            
	printf("Queue size : %d\n", count);                
}
