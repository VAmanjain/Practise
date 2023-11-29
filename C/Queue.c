#include <stdio.h>
#include <stdlib.h>
int opr, f = -1, r = -1;
int insrt, del;
int que[5];
void insert()
{
    if (r == 4)
    {
        printf("Over Flow\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 1;
        que[r] = insrt;
        printf("%d is inserted inside the queue\n", insrt);
    }
    else
    {
        r++;
        que[r] = insrt;
        printf("%d is inserted inside the queue\n", insrt);
    }
}

void delete()
{
    if (f == -1 && r == -1)
    {
        printf("UnderFlow\n");
    }
    else if (r == f)
    {
        del = que[r];
        r = f = -1;
        printf("%d is deleted from the queue\n", del);
    }
    else
    {
        del = que[f];
        f++;
        printf("%d is deleted from the queue\n", del);
    }
}

void display()
{
    int i;
    if (r == -1 && f == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("Required Queue\n");
        for (i = f; i <= r; i++)
        {
            printf(" |%d| ", que[i]);
        }
        printf("\n");
    }
}

int main()
{
    while (1)
    {
        printf("1. Insert\n2. Delete\n3.Display\n4.Exit\n");
        scanf("%d", &opr);
        switch (opr)
        {
        case 1:
            printf("Enter the element to be inserted:");
            scanf("%d", &insrt);
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Program is terminated\n");
            exit(0);
            break;
        }
    }
    return 0;
}