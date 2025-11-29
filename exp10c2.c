//2.	Write a program to insert item in middle of the linked list.
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertMiddle(struct Node* head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node* temp = head;
    int i = 1;
    while (i < position && temp != NULL) {
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Position out of range!\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main() {
    struct Node *head = NULL, *second = NULL, *third = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10; head->next = second;
    second->data = 20; second->next = third;
    third->data = 30; third->next = NULL;
    printf("Original List: 10 -> 20 -> 30 -> NULL\n");
    insertMiddle(head, 25, 2);
    struct Node* temp = head;
    printf("Updated List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");
    return 0;
}
