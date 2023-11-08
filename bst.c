#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

struct node* createnode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preorder(struct node*root){
    if(root!=NULL){
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }

}

void postorder(struct node*root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
         printf("%d", root->data);
    }

}

void inorder(struct node*root){
    if(root!=NULL){
       inorder(root->left);
       printf("%d", root->data);
       inorder(root->right);
    }

}

struct node* search(struct node*root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
       return root;
    }
    else if(key<root->data){
        return search(root->left,key) ;
    }
    else if(key>root->data){
        return search(root->right,key);
    }


};

struct node* itersearch(struct node*root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
       return root;
    }
    else if(key<root->data){
        root=root->left;
    }
    else if(key>root->data){
        root=root->right;
    }
};

void insertat(struct node*root,int key){
     struct node*prev=NULL;
     while(root!=NULL){
        prev=root;
        if(key==root->data){
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
     }
     struct node*new= createnode(key);
     if(key<root->data){
        root->left=new;
     }
     else{
        root->right=new;
     }
}



int main(){
      
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4 

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    //preorder(p);
    //postorder(p);
    inorder(p);

    return 0;

}