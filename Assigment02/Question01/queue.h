#pragma once
#include "user.h"



// Implementation for queue


typedef struct queuenode {

	USER data;
	struct queuenode* next;

}QUEUENODE;


typedef struct queue {

	QUEUENODE* head;
	QUEUENODE* tail;

}QUEUE;


void InItQueue(QUEUE *q);

int IsQueueEmpty(QUEUE *q);

void AddToQueueNode(QUEUE *q, USER user);

int DeQueue(QUEUE *q, USER removedUser);

int AddRandomNumbersToQueue(QUEUE *q, int n);