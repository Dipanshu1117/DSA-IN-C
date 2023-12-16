#include<stdio.h>
#include<stdlib.h>
#define N 50
int stack[N];
int top=-1; 

// for pusing the element in the stack --->

void push(){
    int data;
    printf("enter the data you want to push:");
    scanf("%d",&data);
    if(top == N-1){
    printf("stack is overflow");
    }
    else{
        top++;
        stack[top]=data;
        printf("\n%d pushed to stack",data);
        
    }
    
}
 
//  pop the element in the stack --->
void pop(){
    int item;
    if(top==-1){
    printf("stack underflow");
    }
    else{
        item=stack[top];
        top--;
        printf("\n%d poped element: ",item);
    }
}

// peek the elment in the stack --->
void peek(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("/n%d",stack[top]);
    }
}

// this is for display the element --->
void display(){
    int i;
    printf("Display stack\n");
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n*stack*");
        printf("\n\n1.insert\n2.delete\n3.peek\n4.display\n5.exit");
        printf("\nchoose operation");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
               push();
               break;
            case 2:
               pop();
               break;
            case 3:
               peek();
               break;
            case 4:
               display();
               break;
            case 5:
               exit(0);
               break;
            default:
            printf("wrong choice");        

        }
    }
    return 0;
}
