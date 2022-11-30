//sorted push.
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX],top=-1,tempstack[MAX],temptop=-1;

void push(int data)
{
    if (top == MAX - 1)
        printf("\nStack overflow");
    else if (top == -1)
        stack[++top] = data;
    else
    {
        int tempstack[MAX], temptop = -1;
        while(data > stack[top] && top !=-1)
        {
            int del = stack[top--];
            tempstack[++temptop] = del;
        }
        stack[++top] = data;
        while(temptop>=0)
        {
            int del = tempstack[temptop--];
            stack[++top] = del;
        }
    }
}
void pop()
{
    int del;
    if (top == -1)
        printf("\nStack empty");
    else
    {
        del = stack[top--];
        printf("\nDeleted: %d", del);
    }
}
void display()
{
    if(top==-1)
        printf("Stack Empty\n");
    else
    {
        printf("\n");
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int main()
{
    
    int ch,element;
    do
    {
        printf("\nChoose operation");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display Stack");
        printf("\n4.Exit");
        printf("\nEnter an option\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter the element to insert\n");   
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;  
            case 4 :
                     exit(0);
                   
        }
    }while(ch<4);
    return 0;
}
