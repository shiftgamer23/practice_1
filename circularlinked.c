#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void linkedlistraversal(struct node*head){
    struct node*ptr=head;
    do{
    	printf("%d", ptr->data);
    	ptr=ptr->next;
    	
	}while(ptr->next!=head);
	
}

struct node*Insertatfirst(struct node*head,int value){
	struct node*ptr=(struct node*)malloc(sizeof(struct node)) ;
	ptr->data=value;
	struct node*p=head->next;
	while(p->next !=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
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
    
    linkedlisttraversal(head);
    head=Insertatfirst(head,54);
    linkedlisttraversal(head);
    
    

	return 0;
	
}
