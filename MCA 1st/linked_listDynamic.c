#include <stdio.h>


struct Node {
    int data;
    struct Node* next;
} Node;


void insertAtBeginning(Node** head, int newData);
void insertAtEnd(Node** head, int newData);
void insertAtPosition(Node** head, int position, int newData);
int deleteFromBeginning(Node** head);
int deleteFromEnd(Node** head);
int deleteFromPosition(Node** head, int position);
void displayList(Node* node);
void menu();

int main() {
    Node* head = NULL;
    int choice, data, position, result;

    while(true) {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter the position and data to insert: ");
                scanf("%d %d", &position, &data);
                insertAtPosition(&head, position, data);
                break;
            case 4:
                result = deleteFromBeginning(&head);
                if(result != -1) printf("Deleted data: %d\n", result);
                break;
            case 5:
                result = deleteFromEnd(&head);
                if(result != -1) printf("Deleted data: %d\n", result);
                break;
            case 6:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                result = deleteFromPosition(&head, position);
                if(result != -1) printf("Deleted data: %d\n", result);
                break;
            case 7:
                displayList(head);
                break;
            case 8:
                printf("Exiting program...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void menu() {
    printf("\n--- Linked List Operations Menu ---\n");
    printf("1. Insert at beginning\n");
    printf("2. Insert at end\n");
    printf("3. Insert at specific position\n");
    printf("4. Delete from beginning\n");
    printf("5. Delete from end\n");
    printf("6. Delete from specific position\n");
    printf("7. Display list\n");
    printf("8. Exit\n");
}

void insertAtBeginning(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
    printf("%d inserted at the beginning.\n", newData);
}

void insertAtEnd(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;
    newNode->data = newData;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        printf("%d inserted at the end.\n", newData);
        return;
    }
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("%d inserted at the end.\n", newData);
}

void insertAtPosition(Node** head, int position, int newData) {
    if (position < 1) {
        printf("Position should be >= 1.\n");
        return;
    }

    Node* temp = *head;
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;

    if (position == 1) {
        newNode->next = temp;
        *head = newNode;
        printf("%d inserted at position %d.\n", newData, position);
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position exceeds list length.\n");
        free(newNode);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
        printf("%d inserted at position %d.\n", newData, position);
    }
}

int deleteFromBeginning(Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return -1;
    }
    Node* temp = *head;
    int deletedData = temp->data;
    *head = temp->next;
    free(temp);
    return deletedData;
}

int deleteFromEnd(Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return -1;
    }
    Node *temp = *head, *prev = NULL;
    if (temp->next == NULL) {
        *head = NULL;
        int data = temp->data;
        free(temp);
        return data;
    }
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    int data = temp->data;
    free(temp);
    return data;
}

int deleteFromPosition(Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return -1;
    }
    Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        int data = temp->data;
        free(temp);
        return data;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position exceeds list length.\n");
        return -1;
    }

    Node* next = temp->next->next;
    int data = temp->next->data;
    free(temp->next);
    temp->next = next;
    return data;
}

void displayList(Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
