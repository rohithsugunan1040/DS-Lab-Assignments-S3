// PROGRAM FOR TRACKING THE MINIMUM ELEMENT USING STACK

#include <stdio.h>
#include <stdlib.h> //for exit
#define MAX 50
int stack[Max], top = -1, minstack[2], mtop = -1;
void push(int data)
{
    if (top == MAX - 1)
        printf("\nStack overflow");
    else
    {
        
        stack[++top] = data;

        if(isEmpty(mtop))
        {
            minstack[++mtop] = data;
        }
        else
        {
            if (data <= minstack[mtop] ) {
                minstack[++mtop] = data;
            }
        }
    }
}


int pop()
{
    int d;
    if (top == -1)
        printf("Stack Empty\n");
    else
    {
        d = stack[top--];
        printf("Poped element : %d\n", d);
        if (d = minstack[mtop])
        {
            mtop--;
        }
    }
    return d;
}



void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack is \n");
        for (i = top; i >= 0; i--)
        {
            printf(" %d ", stack[i]);
        }
        
    }
}

void displaymin()
{
  if(mtop=-1)
    {
    printf("\nMinStack is Empty");
    }
  else
    {
    printf("\nMinimum Element is : %d ",minstack[mtop]);
    }  
}

void main()
{
    int ch;
    int p;
    int n;
    do
    {
        printf("\n1.Push\n2.Pop\n3.display Stack with Minimum Element\n4.Exit ");
        printf("\nenter the choice ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the element ");
            scanf("%d", &n);
            push(n);
            break;

        case 2:
            p = pop();
            printf("popped element %d", p);
            break;

        case 3:
            display();
            displaymin();
            break;

        default:
            exit(0);
        }
    } while (ch < 4);
}
