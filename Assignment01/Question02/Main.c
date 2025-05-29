// PROG72370 - 25S - Jason - Austin - Week04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "product.h"

int main() {
    int n;

    // Ask user how many products to generate
    printf("Enter number of products to create: ");
    scanf("%d", &n);

    // Create a list of 'n' random products
    Node* productList = createList(n);

    // Display all products in the list
    printf("\nProduct List:\n");
    traverseList(productList);

    // Free all memory allocated for the list
    freeList(productList);

    return 0;
}
