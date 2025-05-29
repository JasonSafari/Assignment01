#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "product.h"

// Function to create a list with n random products
Node* createList(int n) {
    srand((unsigned int)time(NULL));
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        Product p;
        p.id = rand() % 100 + 1;     // ID between 1–100
        p.qty = rand() % 51;         // Qty between 0–50
        head = insertAtEnd(head, p);
    }
    return head;
}

// Insert a product at the end of the list
Node* insertAtEnd(Node* head, Product newProd) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newProd;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Traverse and print the list
void traverseList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("Product ID: %d, Quantity: %d\n", temp->data.id, temp->data.qty);
        temp = temp->next;
    }
}

// Free all allocated memory
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
