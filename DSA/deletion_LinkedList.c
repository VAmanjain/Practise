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

struct node *deleteFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct node *deleteIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct node *deleteLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct node *deleteValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;

    while (p->data != value)
    {
        if (p->data == NULL)
        {
            printf("\nCan't insert");
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
    p->next = q->next;
    free(q);
    return head;
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
    printf("Before Deletion:\n");
    traversal(head);

    printf("After Deletion:\n");
    // head = deleteFirst(head);
    head = deleteValue(head,3);
    traversal(head);

    return 0;
}