#include<stdlib.h>
#include <stdio.h>
void rtldisplay();
void ltrdisplay();
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*ptr,*temp,*new_node,*head,*p;
void main() {
    int num,i;
    printf("Enter the number of node you want:\n ");
    scanf("%d",&num);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&head->data);
    head->next=NULL;
    head->prev=NULL;
    ptr=head;
    for(i=0;i<num-1;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data node:\n");
        scanf("%d",&new_node->data);
        new_node->prev=ptr;
        ptr->next=new_node;
        new_node->next=NULL;
        ptr=new_node;
    }
    printf("Displaying the datas\n");
    ltrdisplay();
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    rtldisplay();
}
void ltrdisplay()
{
    printf("TRAVERSING left to right\n");
    temp=head;
    while(temp!=NULL)
    {
      printf("%d\n",temp->data);
      temp=temp->next;
    }
}
void rtldisplay()
{
    printf("TRAVERSING right to left\n");
    while(temp!=NULL)
    {
      printf("%d\n",temp->data);
      temp=temp->prev;
    }
}
