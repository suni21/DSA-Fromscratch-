#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int n) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = NULL;

    return ptr;
}
void insertInBeginning(int n)
{
    struct node * ptr=(struct node *)malloc (sizeof(struct node));
    ptr->data=n;
    ptr->next=head;
    head=ptr;
}
void insertAtEnd(int n){
    struct node *ptr,*p=head;
    ptr=(struct node* )malloc (sizeof(struct node*));
    ptr->data=n;

    while(p->next!= NULL)
    {
        p=p->next;
       
    }
    p->next=ptr;
    ptr->next=NULL;
}
void insertAtIndeex(int n, int index){
    struct node * ptr;
    ptr=(struct node *)malloc(sizeof(struct node*));
    ptr->next=index;
}


void displayNode(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    int n, i = 1;
    printf("Enter the data in the first node= ");
    scanf("%d", &n);
    
    head = createNode(n);
    struct node *current = head;
    
    while (i) {
        printf("Enter data for %d node (or enter 0 to stop)= ", i + 1);
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        current->next = createNode(n);
        current = current->next;
        i++;
    }

    // printf("Linked List: ");
    displayNode(head);
    int x,y;
    printf("\nEnter the data to add at the beginning of the list=");
    scanf("%d", &x);
    insertInBeginning(x);
    displayNode(head);

    printf("\nEnter the data to add at the end of the list=");
    scanf("%d", &y);
    insertAtEnd(y);
    displayNode(head);

    return 0;
}
