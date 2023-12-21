#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtFrist(struct node *head)
{
    struct node *ptr = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    int item;
    printf("Enter a value : ");
    scanf("%d", &item);
    p->data = item;
    p->next = head;

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    head = p;

    return head;
}
struct node *insertAtEnd(struct node *head)
{
    struct node *ptr = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    int item;
    printf("Enter a value : ");
    scanf("%d", &item);
    p->data = item;

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = head;

    return head;
}
struct node *insertAtRandom(struct node *head)
{
    struct node *ptr = head;
    struct node *p = (struct node *)malloc(sizeof(struct node));
    int item, value;
    printf("Enter a value : ");
    scanf("%d", &item);
    p->data = item;
    printf("\nEnter a Loc: ");
    scanf("%d", &value);

    int i = 0;
    while (i != value - 1)
    {
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    ptr->next = p;

    return head;
}

void traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("\n%d", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
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
    third->next = head;
    printf("Before Insertion:\n");
    traversal(head);
    // Insetion in Front
    head = insertAtFrist(head);
    printf("\nAfter Insertion:\n");
    traversal(head);
    // Insertion in End
    head = insertAtEnd(head);
    printf("\nAfter Insertion:\n");
    traversal(head);
    // Insertion At Random
    head = insertAtRandom(head);
    printf("\nAfter Insertion:\n");
    traversal(head);

    return 0;
}