#include<stdio.h>
struct stack{
	int size;
	int top;
	int *arr;
};

int isEmpty(struct stack*ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}

int add(int a, int b){
    return a+b;
}

int main(){
	
	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
	s->size=80;
	s->top=-1;
	s->arr =(int *)malloc(80*sizeof(int));
	if(isEmpty(s)){
		printf("The stack is empty");
	}
	
	return 0;
}
