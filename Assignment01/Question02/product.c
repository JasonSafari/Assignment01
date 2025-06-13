#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "product.h"

// Creates a list with 'n' random products
Node* createList(int n) {

    srand((unsigned int)time(NULL));  // Seed random number generator

    Node* head = NULL;  // Start with an empty list

    // Loop to create 'n' products
    for (int i = 0; i < n; i++) {
        Product p;
        p.id = rand() % 100 + 1;    // Random ID from 1 to 100
        p.qty = rand() % 51;        // Random quantity from 0 to 50

        // Insert each product at the end of the list
        head = insertAtEnd(head, p);
    }

    return head;  // Return the head of the list
}

// Inserts a product at the end of the linked list
Node* insertAtEnd(Node* head, Product newProd) {

    // Allocate memory for new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newProd;  // Assign product data
    newNode->next = NULL;     // This node will be at the end, so next is NULL

    // If list is empty, return new node as head
    if (head == NULL) {
        return newNode;
    }

    // Otherwise, traverse to the end of the list
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link the last node to the new node
    temp->next = newNode;
    return head;  // Return the unchanged head
}

// Traverses the list and prints product data
void traverseList(Node* head) {
    Node* temp = head;

    // Loop until the end of the list
    while (temp != NULL) {
        printf("Product ID: %d, Quantity: %d\n", temp->data.id, temp->data.qty);
        temp = temp->next;  // Move to the next node
    }
}

// Frees memory used by the entire linked list
void freeList(Node* head) {
    Node* temp;

    // Loop through and free each node
    while (head != NULL) {
        temp = head;         // Store current node
        head = head->next;   // Move to next node
        free(temp);          // Free memory
    }
}
