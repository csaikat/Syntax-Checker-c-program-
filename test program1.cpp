#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int stack[100],choice,n,top,x,i;
char ch;
void push();
void pop();
void display();
int main()
{
    
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n");
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
	    default:
	    {
		printf ("\n You have entered wrong choice ");
	    }

	}
	printf("\n Do you wish to continue? (y/n)");
	fflush(stdin);
	scanf("%c",&ch);
    }
    while(ch=='y'||ch=='Y');
    return 0;
}
void push()
{
    if(top>=n-1)
    {
	printf("\n\tSTACK is over flow");

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
	printf("\n\t Stack is under flow");
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
	printf("\n The elements in STACK \n");
	for(i=top; i>=0; i--)
	printf("%d\n",stack[i]);
    }
    else
    {
	printf("\n The STACK is empty");
    }

}



