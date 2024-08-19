#include<stdio.h>
#define max 5
void push();
void pop();
void peep();//to display the element
void peek();//return top value
int a[max];
int top=-1;
void main()
{
    int data;
    while(1)
    {
        printf("enter the condition:\n 1=>push 2=>pop 3=>peep 4=>peek\n");
        scanf("%d",&data);
    switch(data)
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
    int p;
    if(top==(max-1))
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("push the data:\n");
        scanf("%d",&p);
        top++;
        a[top]=p;
    }
}
void peep()
{
    int t,i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else{
        t=top;
        printf("displaying values\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    }
}
void pop()
{
    int i;
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        i=top;
        top--;
        printf("data %d is deleted ",a[i]);
    }
    
}
void peek()
{
    printf("the peek data is %d ",a[top]);
}
