#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "queue.h"



void InItQueue(QUEUE* q) {

    q->head = NULL;
    q->tail = NULL;

}



int IsQueueEmpty(QUEUE* q) {

    return q->head == NULL;

}



void AddToQueueNode(QUEUE* q, USER user) {

    QUEUENODE* newNode = (QUEUENODE*)malloc(sizeof(QUEUENODE));

    if (q->head == NULL) {
    
        return 1;
    
    }

    newNode->data = user;
    newNode->next = NULL;

    if (q->head == NULL) {
    
        q->head = newNode;
        q->tail = newNode;
    
    }
    else {
    
        q->tail->next = newNode;
        q->tail = newNode;
    
    }

}