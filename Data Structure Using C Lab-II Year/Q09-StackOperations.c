/*
Problem Statement: 
Write a C program to implement stack operations using arrays.
*/

#include <stdio.h>

#define STACK_MAX_SIZE 10

int stack[STACK_MAX_SIZE];
int top = -1;

void push(int element) {
	if (top == STACK_MAX_SIZE - 1) {
	    printf("Stack is overflow.\n");
	} else {
	    stack[++top] = element;
	    printf("Successfully pushed.\n");
	}
}

void pop() {
	if (top == -1) {
	    printf("Stack is underflow.\n");
	} else {
	    printf("Popped value = %d\n", stack[top--]);
	}
}

void display() {
	if (top == -1) {
	    printf("Stack is empty.\n");
    } else {
	    printf("Elements of the stack are : ");
	    for (int i = top; i >= 0; i--) {
	    	printf("%d ", stack[i]);
	    }
	    printf("\n");
   }
}

int isEmpty() {
	if (top == -1) {
	    printf("Stack is empty.\n");
	    return 1;
	} else {
	    printf("Stack is not empty.\n");
	    return 0;
	}
}

int peek() {
	if (top == -1) {
	    printf("Stack is underflow.\n");
	    return -1;
	} else {
	    printf("Peek value = %d\n", stack[top]);
	    return stack[top];
	}
}
