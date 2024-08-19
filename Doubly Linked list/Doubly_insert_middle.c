#include<stdlib.h>
#include <stdio.h>
void display();
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
    display();
    //-------insert at middle-----
     printf("Enter the position:\n");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter the insert middle data node:\n");
    scanf("%d",&new_node->data);
    temp=head;
    for(i=1;i<num-1;i++)
    {
        temp=temp->next;
    }
    new_node->prev=temp;
    p=temp->next;
    temp->next=new_node;
    new_node->next=p;
    p->prev=new_node;
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
