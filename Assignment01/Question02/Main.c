// PROG72370 - 25S - Jason - Austin - Week04

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "product.h"

int main() {
    int n;
    printf("Enter number of products to create: ");
    scanf("%d", &n);

    Node* productList = createList(n);

    printf("\nProduct List:\n");
    traverseList(productList);

    freeList(productList);
    return 0;
}
