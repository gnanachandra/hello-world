#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

typedef struct node node;
node *head=NULL;

node *createnode(int input){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=input;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    return newnode;
}
void insertatbegin(int input){
    node *x=malloc(sizeof(node));
    x->data=input;
    x->next=NULL;
    head=x;
}

void push(int input){
   
    if(head==NULL){
        insertatbegin(input);
    }
    else{
        node *x=createnode(input);
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=x;
    }
}
void pop(){
    if(head==NULL){
        printf("list is empty cannot delete");
    }
    else{
    node *a=head;
    node *b=head->next;
    while(b->next!=NULL){
        b=b->next;
        a=a->next;
    }
    a->next=NULL;
    free(b);
    }
}

void display(){
    node *temp=head;
    printf("the elements are:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){

    int size;
    int value;
    printf("enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&value);
        push(value);
    }
    display();
    pop();
    pop();
    pop();
    display();
    return 0;
}