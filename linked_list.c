#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
}*head = NULL,*tail = NULL, *temp = NULL, *curr = NULL, *prev = NULL;

void insert_at_tail(int x){
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		tail = temp;
	}else{
		tail->next = temp;
		tail = temp;
	}
}
void insert_at_head(int x){
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if(head == NULL){
		head = temp;
		tail = temp;
	}else{
		temp->next = head;
		head = temp;
	}
}
void insert_at_pos(int x,int y){
	prev = NULL;
	curr = head;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->next = NULL;
	if(y == 0){
		insert_at_head(x);
	}else{
		int i = 1;
		for(i = 0; i<y; i++){
			prev = curr;
			curr = curr->next;
		}
		if(curr == NULL){
			insert_at_tail(x);
		}else{
			prev->next = temp;
			temp->next = curr;
			
		}
	}
}

void delete_at_head(){
	if(head == NULL){
		printf("\nEmpty list");
	}else{
		temp = head;
		head = head->next;
		free(temp);
	}
	
}

void delete_at_tail(){
	if(head == NULL){
		printf("\nEmpty list");
	}else{
		prev = NULL;
		curr = head;
		while(curr->next != NULL){
			prev = curr;
			curr = curr->next;
		}
		prev->next = NULL;
		tail = prev;
		free(curr);
	}
	
}

void delete_at_pos(int x){

	if(head == NULL){
		printf("\nEmpty List");
	}else{
		if(x == 0){
			delete_at_head();
		}else{
			prev = NULL;
			curr = head;
			int i = 0;
			for(i = 0 ; i< x; i++){
				prev = curr;
				curr = curr->next;
			}
			if(curr == NULL){
				delete_at_tail();
			}else{
				prev->next = curr->next;
				free(curr);
			}
		}
		
		
	}
	
}

void display(){
	temp = head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp = temp->next;
	}
}
int main(){
int choice=1;
while(choice!=8){
	printf("\nEnter choice 1: insert_at_head 2: insert_at_pos 3: insert_at_tail 4: delete_at_pos 5: delete_at_head 6:delete_at_tail 7:display 8:exit : ");
	scanf("%d",&choice);
	if(choice == 1){
		int x;
		printf("\nEnter the number : ");
		scanf("%d",&x);
		insert_at_head(x);
	}else if(choice  == 2){
		int x,y;
		printf("\nEnter the number and pos : ");
		scanf("%d %d",&x,&y);
		insert_at_pos(x,y);
	}else if(choice == 3){
		int x;
		printf("\nenter the number : ");
		scanf("%d",&x);
		insert_at_tail(x);
	}else if(choice == 4){
		int x;
		printf("\nEnter the pos: ");
		scanf("%d",&x);
		delete_at_pos(x);
	}else if(choice == 5){
		delete_at_head();
	}else if(choice == 6){
		delete_at_tail();
	}else if(choice == 7){
		display();
	}
}

	
	
}
