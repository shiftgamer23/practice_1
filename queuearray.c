#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

void enqueue(struct node*r,struct node*f,int val){
	struct node*n=(struct node*)malloc(sizeof(struct node) );
	n->next=NULL;
	n->data=val;
	r->next=n;
	r=n;
}

int dequeue(struct node*f,struct node*r){
	struct node*ptr=f;
	int temp;
	temp=ptr->data;
	f=f->next;
	free(ptr);
	
	return temp;
	
}

int main(){
	struct node*f=NULL;
	struct node*r=NULL;
	
	return 0;
}
