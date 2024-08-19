#include<stdlib.h>
#include <stdio.h>
void display();
struct node
{
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
    ptr=head;
    for(i=0;i<num-1;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data node:\n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        ptr->next=new_node;
        ptr=new_node;
    }
    printf("Displaying the datas\n");
    display();
    printf("Deleting at beggining\n");
    head=head->next;
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
