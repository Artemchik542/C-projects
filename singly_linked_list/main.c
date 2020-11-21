#include <stdio.h>
#include <stdlib.h>

typedef struct List {
    int value; // занчение элемента в списке
    char *next; // ссылка на следующий элемент списа
} List;

void pushList(List **head, int data) { // проталкивание элемента в начало с писка
    List *tmp = malloc(sizeof(List));
    (*tmp).value = data;
    (*tmp).next = *head;
    *head = tmp;
}

void printLinkedList(List *head) { // вывод всего сиска
    while (head) {
        printf("%d ", (*head).value);
        head = (*head).next;
    }
    printf("\n");
}

int popList(List **head) { // откусываем первый элемент из спика с последуюущим выводом
    List* bite = NULL;
    int val;
    if (head == NULL) { // проверка на не конечность спичка
        exit(-1);
    }
    bite = (*head);
    val = (*bite).value;
    (*head) = (**head).next;
    free(bite);
    return val;
}

void clearList(List **head) {
    while ((**head).next) {
        popList(head); // pop уже за нас очищает память
        *head = (**head).next;
    }
    free(*head);
    *head = NULL;
}

void insertList(List *head, unsigned int pos, int data) {
    unsigned int i = 0;
    List *tmp = NULL;
    while (i < pos && (*head).next) {
        head = (*head).next;
        i++;
    }
    tmp = (List*) malloc(sizeof(List));
    (*tmp).value = data;
    
    if ((*head).next) {
        (*tmp).next = (*head).next;
    } else {
        (*tmp).next = NULL;
    }
    (*head).next = tmp;
}


int main() {
    List* head = NULL; // ссылка на первый элемент списка

    pushList(&head, 1);
    pushList(&head, 3);
    printLinkedList(head);
    printf("%d\n", popList(&head));
    printLinkedList(head);
    clearList(&head);

    pushList(&head, 5);
    pushList(&head, 8);
    insertList(head, 1, 7);
    printLinkedList(head);

    return 0;
}