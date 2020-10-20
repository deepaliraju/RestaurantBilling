#include <stdio.h>
#include <stdlib.h>

struct Queue 
{ 
    int front, rear, size; 
    unsigned capacity; 
    int* array; 
}; 
struct Queue* createQueue(int);
int isFull(struct Queue*);
int isEmpty(struct Queue*);
void enQueue(struct Queue* , int);
int deQueue(struct Queue*);