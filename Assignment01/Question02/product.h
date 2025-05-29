#ifndef PRODUCT_H
#define PRODUCT_H

// Product structure
typedef struct {
    int id;
    int qty;
} Product;

// Node structure
typedef struct Node {
    Product data;
    struct Node* next;
} Node;

// Function declarations
Node* createList(int n);
Node* insertAtEnd(Node* head, Product newProd);
void traverseList(Node* head);
void freeList(Node* head);

#endif
