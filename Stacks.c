#include<stdio.h>
int stack[100],choice,n,top,x,i; // varriable and functions declarations
void push(void);
void pop(void);
void display(void);
int main() // main program starting here
{
    top=-1;
    printf("\n***Here is the implementation of a stack DS using an array.***\n");
    printf("\n Enter the size of STACK:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
} // end of main program and start of functions implementation

void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is Full, sorry you can't push.");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is empty, you can't pop from an empty stack.");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK are:\n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}

