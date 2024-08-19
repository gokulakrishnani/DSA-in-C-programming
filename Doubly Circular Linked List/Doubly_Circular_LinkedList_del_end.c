#include<stdlib.h>
#include<stdio.h>
void display();
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*ptr,*temp,*new_node,*head,*n;
void main() {
    int num,i;
    printf("Enter the number of node you want:\n ");
    scanf("%d",&num);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&head->data);
    head->next=head;
    head->prev=head;
    ptr=head;
    for(i=0;i<num-1;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data node:\n");
        scanf("%d",&new_node->data);
        new_node->prev=ptr;
        ptr->next=new_node;
        new_node->next=head;
        ptr=new_node;
    }
    head->prev = ptr;
    printf("Displaying the datas\n");
    display();
     //-------del at end-----
    struct node *p=ptr;
    ptr=p->prev;
    ptr->next=head;
    head->prev=ptr;
    free(p);
    printf("head\n");
    printf("%d\n",head->data);
    printf("Displaying the updated datas\n");
    display();
}
void display()
{
    temp=head;
    do
    {
      printf("%d\n",temp->data);
      temp=temp->next;
    }while(temp!=head);
}
