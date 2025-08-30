#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node *pre)
{
    while (pre != NULL)
    {
        printf("%d \n", pre->data);
        pre = pre->next;
    }
}

struct node *insertFirst(struct node *head, int data)
{
    struct node *pre = (struct node *)malloc(sizeof(struct node));
    pre->next = head;
    pre->data = data;
    return pre;
}

int main()
{
    struct node *head;
    struct node *sec;
    struct node *third;
    head=   (struct node *) malloc (sizeof (struct node ));
    sec=(struct node *) malloc (sizeof (struct node ));
    third=(struct node *) malloc (sizeof (struct node ));
    head->data = 10;
    head->next = sec;
    
    sec->data = 20;
    sec->next = third;
    
    third->data = 30;
    third->next = NULL;
    
    printf("Linked List elements:\n");
    head=insertFirst(head,5);
    insert(head);

    return 0;

}
