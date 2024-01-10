#include<stdio.h>
#include<conio.h>
# define max 100
char st[max];
int top=-1;
void push(char ch)
{
	if(top==max-1)
	{
		printf("Stack Overflow");
	}
	else
	{
		top++;
		st[top]=ch;
	}

}
void pop()
{
	char del;
	if(top==-1)
	{
		printf("Stack Underflow");
	}
	else
	{
	       del=st[top];
	       top--;
		printf("Deleted character is =%c",del);
	}



}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is EMPTY");
	}
	else
	{
		printf("------Reverse String------\n");
		for (i=top;i>=0;i--)
		{
			printf("%c",st[i]);
		}
		printf("\n------Original String------\n");
		for (i=0;i<=top;i++)
		{
			printf("%c",st[i]);
		}



	}
}
main()
{
       int choose=1;
	char val;
	while(choose!=4)
	{
		printf("\n\nPress (1) for PUSH");
		printf("\nPress (2) for POP");
		printf("\nPress (3) Display Stack");
		printf("\nPress (4) for EXIT");
		printf("\nEnter Your Choice =");
		scanf("%d",&choose);

		switch(choose)
		{
			case 1:
				getchar();
				printf("Enter character for Push=");
				scanf("%c",&val);
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default :
				printf("Invalid Choice");
				break;


		}

	}
	getch();

}
/*

Press (1) for PUSH
Press (2) for POP
Press (3) Display Stack
Press (4) for EXIT
Enter Your Choice =1
Enter character for Push=a


Press (1) for PUSH
Press (2) for POP
Press (3) Display Stack
Press (4) for EXIT
Enter Your Choice =1
Enter character for Push=b


Press (1) for PUSH
Press (2) for POP
Press (3) Display Stack
Press (4) for EXIT
Enter Your Choice =1
Enter character for Push=c


Press (1) for PUSH
Press (2) for POP
Press (3) Display Stack
Press (4) for EXIT
Enter Your Choice =3
------Reverse String------
cba
------Original String------
abc



*/
