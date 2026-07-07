#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head, *second, *third;

    // Create first node
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;

    // Create second node
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 20;

    // Create third node
    third = (struct Node *)malloc(sizeof(struct Node));
    third->data = 30;

    // Link the nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Print the linked list
    struct Node *temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}