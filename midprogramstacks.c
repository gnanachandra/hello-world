// do the program
#include<stdio.h>
#include "stack1.h"
#include "stack2.h"
//program works
int stack[10];
int size=10;
int top=-1;

void push(int value){
    if(top==size-1){
        printf("stack is full");
    }
    else{
        stack[++top]=value;
    }


}
void display(){
    int a =top;
    while(a!=-1){
        printf("%d\t",stack[a]);
        a--;
    }
}

int main(){
    //pushes the elements into stack1
    push1(10);
    push1(8);
    push1(6);
    push1(4);
    push1(2);

    //pushes the elements into stack2
    push2(9);
    push2(7);
    push2(5);
    push2(3);
    push2(1);
        

    while (top1!=-1 && top2!=-1 )
    {
        int x=peek1();
        int y=peek2();
        if(x<y){
            push(x);
            pop1();
        }
    }
    if(top1!=-1){
        while(top!=-1){
            int x=peek1();
            push(x);
            pop1();
        }
    }
    if(top2!=-1){
        while(top2!=-1){
            int x=peek2();
            push(x);
            pop2();
        }
    }

    display();


    
}
