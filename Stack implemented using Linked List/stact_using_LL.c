#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void peep();//to display the element
void peek();//return top value
struct node{
    int data;
    struct node *next;
}*top=NULL,*n;
void main()
{
    int data1;
    while(1)
    {
        printf("enter the condition:\n 1=>push 2=>pop 3=>peep 4=>peek\n");
        scanf("%d",&data1);
    switch(data1)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        peep();
        break;
        case 4:
        peek();
        break;
    }
    }
}
void push()
{
    if(top==NULL)
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:\n");
        scanf("%d",&n->data);
        n->next=NULL;
        top=n;
    }
    else
    {
        n=(struct node*)malloc(sizeof(struct node));
        printf("enter the data:\n");
        scanf("%d",&n->data);
        n->next=top;
        top=n;
    }
}
void peep()
{
    struct node *t;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else{
        t=top;
        while(t!=NULL)
        {
            printf("%d\n",t->data);
            t=t->next;
        }
    }
}
void pop()
{
    struct node *i;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        i=top;
        top=top->next;
        printf("data %d is deleted ",*i);
        free(i);
    }
    
}
void peek()
{
    printf("the peek data is %d ",*top);
}
