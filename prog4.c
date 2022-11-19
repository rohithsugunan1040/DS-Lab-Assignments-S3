//Implement a sorted push so that stack is always maintained in sorted order.
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX],top=-1;
void sortpush(int item[],int n)
{
    int it,i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(item[j]>item[j+1])
            {
                temp=item[j];
                item[j+1]=item[j];
                item[j+1]=temp;
            }
        }
    }

    //here u should write the fn for pushing the element of sorted to array to stack 
    for(i=0;i<n;i++)
      {
        push(item[i]);
      }


    
}
void push(int data)  
{
    if(top==MAX-1)
        printf("Stack Overflow\n");
    else
    stack[++top]=data;
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
        printf("\n4.Display sorted push ");
        printf("\n5.Exit");
        printf("\nEnter an option\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter the element to insert\n");   //change for inputting an array!
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
                   //complete for printong the sorted elemrnts
            default: exit(0);          
        }
    }while(ch<4);
    return 0;
}
