#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};


struct node *createTree (struct node *node, int data ){
        if (node==NULL)
        {
            struct node *temp;
            temp = (struct node*) malloc(sizeof(struct node));
            temp->data=data;
            temp->left=temp->right=NULL;
            return temp;
        }
        
}

int main()
{

    return 0;
}
