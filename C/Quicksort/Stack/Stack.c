#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int stack[MAX];
int item;
int top = -1, count = 0;

/* PUSH FUNCTION */
void push(int item) {
    if (top == (MAX - 1)) {
        printf("\n\nStack is Overflow");
        exit(1);
    } else {
        stack[++top] = item;
        count++;
    }
}

/* POP FUNCTION */
int pop() {
    int ret = -1; // Initialized to -1 in case stack is empty
    if (top == -1) {
        printf("\n\nStack is Underflow");
        exit(1);
    } else {
        ret = stack[top--];
        count--;
        printf("\nPopped element is %d", ret);
    }
    return ret;
}

/* FUNCTION TO CHECK STACK IS PALINDROME OR NOT */
void palindrome() {
    int i, temp = count;
    for (i = 0; i < temp; i++) {
        if (stack[i] != stack[temp - i - 1]) {
            count--;
            break; // Exit the loop if mismatch found
        }
    }
    if (temp == count)
        printf("\nStack contents are Palindrome");
    else
        printf("\nStack contents are not palindrome");
}

/* FUNCTION TO DISPLAY STACK */
void display() {
    int i;
    printf("\nThe stack contents are:");
    if (top == -1)
        printf("\nStack is Empty");
    else {
        for (i = top; i >= 0; i--)
            printf("\n ------\n| %d |", stack[i]);
        printf("\n");
    }
}

/* MAIN PROGRAM */
int main() {
    int ch;
    do {
        printf("\n\n----MAIN MENU----\n");
        printf("\n1. PUSH (Insert) in the Stack");
        printf("\n2. POP (Delete) from the Stack");
        printf("\n3. PALINDROME check using Stack");
        printf("\n4. Exit (End the Execution)");
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\nEnter an element to be pushed: ");
                scanf("%d", &item);
                push(item);
                display();
                break;
            case 2:
                item = pop();
                display();
                break;
            case 3:
                palindrome();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice. Try again.");
                break;
        }
    } while (ch != 4);

    return 0;
}