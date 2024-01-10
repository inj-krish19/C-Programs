/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 8.)	Write a C program to split a given linked list into two.

*/
#include<stdio.h>
main()
{
	int i;
	struct linked_list{
		int id;
		struct linked_list *next;
	};
	
	int choice,n;
	typedef struct linked_list node;
	
	node *current,*head,*prev,*end;
	
	head = (node *)malloc(sizeof(node));
	prev = (node *)malloc(sizeof(node));
	end = (node *)malloc(sizeof(node));
	
	printf("Enter Choice Of Linked List 1 Till You Want To End :");
	scanf("%d",&choice);
	
	for(i=1;i<=choice;i++)
	{
		current = (node *)malloc(sizeof(node));
		printf("\nEnter id : ");
		scanf("%d",&current->id);
		
		current->next = NULL;
		
		if(i == 1)
		{
			head = current;
			prev = current;
		}
		else
		{
			prev->next = current;
			prev = current;
		}
	}
	printf("\nEnter Number To Split Linked List :");
	scanf("%d",&n);
	
	if(n >= choice)
	{
		printf("\nCan't Split");
	}
	else
	{
		i=1;
		current = head;
		printf("\n\nLinked List 1 Is : \n");
		while(current != NULL && i<=n)
		{
			printf("\n\nElement\t : %d",i);
			printf("\nId\t : %d",current->id);
			prev = current;
			current = current->next;
			i++;
		}

		prev->next = NULL;
	
		i=n+1;
		printf("\n\nLinked List 2 Is : \n");
		while(current != NULL )
		{
			printf("\n\nElement\t : %d",i);
			printf("\nId\t : %d",current->id);
			current = current->next;
			i++;
		}
	}
}
/*
OUTPUT : 
-----------------------------------------------------------------------
Enter Choice Of Linked List 1 Till You Want To End :3

Enter id : 1

Enter id : 12

Enter id : 5

Enter Choice Of Linked List 2 Till You Want To End :2

Enter id : 1

Enter id : 47


Appended Linked List Is :


Element  : 1
Id       : 1

Element  : 2
Id       : 12

Element  : 3
Id       : 5

Element  : 4
Id       : 1

Element  : 5
Id       : 47
-----------------------------------------------------------------------*/
