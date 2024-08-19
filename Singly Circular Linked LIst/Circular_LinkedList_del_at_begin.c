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
    printf("enter the data at del at beginning:\n "); 
        temp=head;
        head=head->next;
        ptr->next=head;
        free(temp);
    printf("Displaying with del beginning linked list value\n");
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
