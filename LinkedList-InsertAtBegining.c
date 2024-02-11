#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linked(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELEMENT= %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insertion( struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    struct node *second;
    second=(struct node*)malloc(sizeof(struct node));
    struct node *third;
    third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth;
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=NULL;
    linked(head);
    printf("Insertion after !!\n");
    head=insertion(head,0);
    linked(head);

    return 0;
};
