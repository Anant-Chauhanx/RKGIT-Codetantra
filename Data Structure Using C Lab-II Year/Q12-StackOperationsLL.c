/*
Problem Statement: 
Write a program to implement stack using linked lists.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int element) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	if (newNode == NULL) {
	    printf("Memory allocation failed. Stack is full.\n");
	    return;
	}
	        
	newNode->data = element;
	newNode->next = top;
	top = newNode;
	printf("Successfully pushed.\n");
}

void pop() {
	if (top == NULL) {
	    printf("Stack is underflow.\n");
	    return;
	}
	    
	struct Node* temp = top;
	top = top->next;
	printf("Popped value = %d\n", temp->data);
	free(temp);
}

void display() {
    if (top == NULL) {
	    printf("Stack is empty.\n");
	    return;
    }
	    
	printf("Elements of the stack are : ");
	struct Node* current = top;
	while (current != NULL) {
	      printf("%d ", current->data);
	      current = current->next;
	}
	printf("\n");
}

void isEmpty() {
	if (top == NULL) {
	    printf("Stack is empty.\n");
	} else {
	    printf("Stack is not empty.\n");
	}
}

void peek() {
	if (top == NULL) {
	   printf("Stack is underflow.\n");
	   return;
	}
	    
	printf("Peek value = %d\n", top->data);
}
