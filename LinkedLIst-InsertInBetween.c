#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linked(struct node *ptr)
{
    while(ptr != 0)
    {
        printf("THE ELMENT= %d \n", ptr ->data);
        ptr=ptr->next;
    }
}
struct node *index(int *head,int data,int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i != index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

void main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    struct node *second;
    second=(struct node*)malloc(sizeof(struct node));
    struct node *third;
    third=(struct node*)malloc(sizeof(struct node));
    struct node *four;
    four=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next = second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=four;
    four->data=4;
    four->next=0;
    linked(head);
    printf("AFTER THE INSERTION AT REQUIRED INDEX\n");
    index(head,100000,1);
    linked(head);


}
