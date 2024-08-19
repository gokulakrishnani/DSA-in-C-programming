#include<stdlib.h>
#include <stdio.h>
void display();
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*ptr,*temp,*new_node,*head;
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
    display();
    //-------insert at ending-----
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the insert ending data node:\n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    temp=head;
    for(i=0;i<num-1;i++)
    {
        temp=temp->next;
    }
    new_node->prev=temp;
    temp->next=new_node;
    printf("Displaying the datas\n");
    display();
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
      printf("%d\n",temp->data);
      temp=temp->next;
    }
}
