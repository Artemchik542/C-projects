#include <stdio.h>
#include <stdlib.h>

typedef struct List {
    int value; // значение элемента в списке
    char *next; // ссылка на следующий элемент списка
} List;

void pushList(List** head, int data) { // проталкивание элемента в начало списка
    List* tmp = malloc(sizeof(List)); // создание отдельной ветви односвязного списка
    if (tmp == NULL)
        exit(-1);
    tmp->value = data; // присвоение ему данных
    tmp->next = *head; // и присвоение ему ссылки на head
    *head = tmp; // теперь tmp встало на место head
}

void printLinkedList(List* head) { // вывод всего списка
    while (head) {
        printf("%d ", (*head).value);
        head = (*head).next;
    }
    printf("\n");
}

int popList(List** head) { // откусываем первый элемент из списка с последуюущим выводом
    List* bite = NULL;
    int val;
    if (head == NULL) { // проверка на не конечность списка
        exit(-1);
    }
    bite = *head;
    val = (*bite).value;
    (*head) = (**head).next;
    free(bite);
    return val;
}

void clearList(List** head) {
    while ((**head).next) {
        popList(head); // pop уже за нас очищает память
        *head = (**head).next;
    }
    free(*head);
    *head = NULL;
}

void insertList(List* head, unsigned int pos, int data) {
    unsigned int i = 0;
    List* tmp = NULL;
    while (i < pos && (*head).next) {
        head = (*head).next;
        i++;
    }
    tmp = malloc(sizeof(List));
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