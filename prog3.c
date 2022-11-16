 #include<stdio.h>
 #include<stdlib.h> //for exit
 #define Max 50
 int stack[Max],top=-1,minstack[2],mtop=-1,min;
 void push(int item)
 	{
 	if(top==Max-1)
 	  {
 	  printf("StackFull");
 	  }
 	else
 	{
 	stack[++top]=item;
 	}  
 	//min=item;
 	
 	/*if(mtop==-1)
 	   ++mtop;
 	if(stack[top]>min)
       {
       minstack[++mtop]=stack[top];
       
       }*/
    if(mtop=-1)   
      {
      ++mtop;
      minstack[mtop]=item;
      
      }
    }   	
 	 	
 	
 int pop()
{
    int d;
    if(top==-1)
        printf("Stack Empty\n");
    else
    {
        d=stack[top--];
        printf("Poped element : %d\n",d);
        if(d=minstack[mtop])
          {
            --mtop;
            
          }
    }
    return d;    
}

void display()
{
   int i;
   if(top==-1)
     {
     printf("Stack is empty");
     
     }
   else
   {
   printf("Stack is \n");
   for(i=top;i<=0;i--)
     {
     printf(" %d ",stack[i]);
     }
   printf("minimum element is %d",minstack[mtop]);  
     
   }  
}

void main()
{
int ch;
int p;
int n;
do{
printf("\n1.Push\n2.Pop\n3.display\n4.Exit ");
printf("enter the choice ");
scanf("%d",&ch);
switch(ch){
    case 1:printf("enter the element ");
           scanf("%d",&n);
           push(n);
           break;
    
    case 2:p=pop();
           printf("popped element %d",p);
           break;
      
    case 3:display();
           break;
    
    default: exit(0);
    }
 }while(ch<4);
 
}                        

