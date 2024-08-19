// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
void display();
struct node
{
    int data;
    struct node *next;
}*p,*n,*ptr,*head,*n1,*temp;
void main() {
    int num,i;
    printf("Enter the number of nodes\n ");
    scanf("%d",&num);
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the node:\n ");
    scanf("%d",&head->data);
    head->next=head;
    ptr=head;
    for(i=1;i<num;i++)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("Enter the node:\n ");
        scanf("%d",&n->data);
        n->next=head;
        ptr->next=n;
        ptr=n;
    }
    printf("Displaying linked list value\n");
    display();
        temp=head;
        while(temp->next!=n)
        {
            temp=temp->next;
        }
        temp->next=head;
    printf("Displaying with del end linked list value\n");
    display();
    printf("head\n");
    printf("%d",head->data);
}
void display()
{
  p=head;
  do
  {
      printf("%d\n",p->data);
      p=p->next;
  }while(p!=head);
}
