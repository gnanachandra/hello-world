#include<stdio.h>
#include "stack.h"
int infixtopostfix(char *arr){
    int i=0;
    int count=0;
    while(i<size){
       char x=peek();
        if(arr[i]==')' && x=='('){
            pop();
            count++;
        } 
        else if(arr[i]=='}' && x=='{'){
            pop();
            count++;
        }
        else if(arr[i]==']' && x=='['){
            pop();
            count++;
        }
        i++;
    }
    if(count==size/2){
        return 1;
    }
    return 0;
    
}
int main()
{
    printf("enter the sizeof sting:");
    scanf("%d%*c",&size);
    char arr[size];
    int j=0;
    for(int i=0;i<size;i++){
        scanf("%c%*c",&arr[i]);
        if(arr[i]=='(' || arr[i]=='{' || arr[i]=='['){
            push(arr[i]);
        }
        
    }
    int result=infixtopostfix(arr);
    if(result==1){
        printf("balanced");
    }
    else{
        printf("not balanced");
    }
    return 0;
}