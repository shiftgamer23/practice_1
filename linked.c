#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void linkedlistraversal(struct node*head){
    struct node*ptr=head;
    while(ptr!=NULL){
    	printf("%d", ptr->data);
    	ptr=ptr->next;
    	
	}
	
}

struct node* linkedlistsearch(struct node*head, int value){
	struct node*ptr=head;
	while(ptr->next!=NULL){
		int count=0;
		if(ptr->data==value){
			printf("The element %d has been found\n", value);
			count++;
			ptr=ptr->next;
		}
	}
}

int main(){

    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    
    head=(struct Node*) malloc(sizeof(struct node));
    second=(struct Node*) malloc(sizeof(struct node));
    third=(struct Node*) malloc(sizeof(struct node));
    fourth=(struct node*) malloc(sizeof(struct node));
    
    head->data=8;
    head->next=second;
    
    second->data=11;
    second->next=third;
    
    third->data=69;
    third->next=fourth;
    
    fourth->data=51;
    fourth->next=head;
    

	return 0;
	
}
