#include <stdio.h>

int *stack;
int top = -1;
int MAX_SIZE;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push more elements.\n");
        return;
    }
    stack[++top] = value;
    printf("Element %d pushed onto the stack.\n", value);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return;
    }
    printf("Element %d popped from the stack.\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Elements in the stack:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice, element;

    printf("Enter the maximum size of the stack: ");
    scanf("%d", &MAX_SIZE);
    stack = (int *)malloc(MAX_SIZE * sizeof(int));

    if (stack == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                free(stack);
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}
