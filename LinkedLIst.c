#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};
void linked(struct node* ptr)
{
    while(ptr != 0)
    {
        printf("THE ELMENT= %d \n", ptr ->data);
        ptr=ptr->next;
    }
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
    head->data=12;
    head->next = second;
    second->data=11;
    second->next=third;
    third->data=12;
    third->next=four;
    four->data=12;
    four->next=0;
    linked(head);



}
