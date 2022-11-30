#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
}*head = NULL, *temp = NULL;

void push(int ele)
{
    
    if (head == NULL)
    {
        head =(struct node *)malloc(1*sizeof(struct node));
        head->next = NULL;
        head->data = ele;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->next= head;
        temp->data = ele;
        head = temp;
    }
    
}


void pop(){
	if(head == NULL){
		printf("\nEmpty list");
	}else{
		temp = head;
        int tempel=temp->data;
		head = head->next;
		free(temp);
        printf("the poped element is %d",tempel);
	}
	
}

void display(){
	temp = head;
    if(head == NULL)
		printf("\nEmpty list");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}
}

void main()
{
    int data,op;
    char ch;
    ch='y';
    printf("STACK USING LINKED LIST ");
    printf("\n---------------------------------\n");
    while (ch='y')
        {
            printf("\n1.Push Element \n2.Pop Element \n3.display stack ");
            printf("\n\nEnter choice ");
            scanf("%d",&op);
            switch(op)
                {
                    case 1:
                            printf("\nenter the element to be inserted ");
                            scanf("%d",&data);
                            push(data);
                            printf("element inserted !! ");
                            break;
                     case 2:
                            pop();
                            break;
                    case 3: 
                            display();
                            break;
                    default:exit(0);
                }
        }
}
