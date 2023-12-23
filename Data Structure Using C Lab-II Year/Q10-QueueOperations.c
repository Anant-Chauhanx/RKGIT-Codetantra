/*
Problem Statement: 
Write a program to implement queue using arrays.
*/

#include <stdio.h>

#define MAX_SIZE 100

int front = -1;
int rear = -1;
int queue[MAX_SIZE];

void isEmpty() {
	if (front == -1 && rear == -1)
	    printf("Queue is empty.\n");
	else
	    printf("Queue is not empty.\n");
	
}

void size() {
	if (front == -1 && rear == -1)
	   printf("Queue size : 0\n");
	else
	   printf("Queue size : %d\n", rear - front + 1);
}

void enqueue(int element) {
	if (rear == MAX_SIZE - 1) {
	    printf("Queue is full.\n");
	} else {
	    if (front == -1) {
	    	front = 0;
	    }
	    rear++;
	    queue[rear] = element;
	     printf("Successfully inserted.\n");
    }
}

void dequeue() {
	if (front == -1) {
	    printf("Queue is underflow.\n");
	} else {
	    printf("Deleted element = %d\n", queue[front]);
	    if (front == rear) {
	    	front = rear = -1;
	    } else {
	    	 front++;
	    }
	}
}

void display() {
	if (front == -1) {
	    printf("Queue is empty.\n");
	} else {
	    printf("Elements in the queue : ");
	    for (int i = front; i <= rear; i++) {
	    	printf("%d ", queue[i]);
	    }
	    printf("\n");
	}
}
