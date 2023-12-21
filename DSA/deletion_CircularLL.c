#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void createList(){
    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    if( ptr == NULL){
      printf("\nOverFlow");
    }
    else{
        int value;  
    }
}

int main()
{


    return 0;
}