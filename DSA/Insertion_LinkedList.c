#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *insertAtFrist(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

void traversal(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf(" Element :%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // Allocated memory to nodes
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // Link First and Second node
    head->data = 7;
    head->next = second;
    // Link Second and Third node
    second->data = 3;
    second->next = third;
    // terminate the node
    third->data = 4;
    third->next = NULL;
    printf("Before Insertion:\n");
    traversal(head);
    // head = insertAtFrist(head, 56);
    // head = insertAtIndex(head, 32, 2);
    printf("\nAfter Insertion\n");
    // head = insertAtEnd(head, 23);
    head = insertAfterNode(head, second, 55);
    traversal(head);

    return 0;
}