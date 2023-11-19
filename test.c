// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node *next;
} node;

int main() {
    // Write C code here
    node head;
    node h1;
    node h2;
    node h3;
    node h4;
    int i = 0;
    
    head.val = 1;
    h1.val = 2;
    h2.val = 3;
    h3.val = 4;
    h4.val = 5;
    // linking
    head.next = &h1;
    h1.next = &h2;
    h2.next = &h3;
    h3.next = &h4;
    h4.next = NULL;
    
    node *current = &head;
    while (current != NULL)
    {
        printf("position: %d\n",current->val);
        current = current->next;
        i++;
    }
    printf("%d",i);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

// Define the struct for the linked list node
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;

// Function to create a new node with the given content
t_list *ft_lstnew(void *content) {
    t_list *newNode;
    
    newNode = (t_list *)malloc(sizeof(t_list));
    if (newNode != NULL) {
        newNode->content = content;
        newNode->next = NULL;
        return newNode;
    }
    return NULL;
}

// Function to add a new node to the front of the linked list
void ft_lstadd_front(t_list **lst, t_list *new) {
    if (*lst)
        new->next = *lst;
    // *lst = new;
}

// Function to print the elements of the linked list
void printList(t_list *head) {
    while (head != NULL) {
        printf("%s ", head->content);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Create an initial linked list
    t_list *initialList = ft_lstnew("Initial");

    // Add nodes to the front of the linked list
    ft_lstadd_front(&initialList, ft_lstnew("World"));
    ft_lstadd_front(&initialList, ft_lstnew("Hello"));

    // Print the modified linked list
    printf("%s\n",&(initialList->next));
    printf("Modified Linked List: ");
    printList(initialList);

    // Free the memory allocated for the linked list
    free(initialList);

    return 0;
}

*/