/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 7.)	Write a program to create two linked list 
			and append the second list after the first.

*/
#include<stdio.h>
main()
{
	int i;
	struct linked_list{
		int id;
		struct linked_list *next;
	};
	
	int choice;
	typedef struct linked_list node;
	
	node *current,*l1head,*l2head,*prev,*end;
	
	l1head = (node *)malloc(sizeof(node));
	l2head = (node *)malloc(sizeof(node));
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
			l1head = current;
			prev = current;
		}
		else
		{
			prev->next = current;
			prev = current;
		}
	}
	end = current;
	
	printf("\nEnter Choice Of Linked List 2 Till You Want To End :");
	scanf("%d",&choice);
	
	for(i=1;i<=choice;i++)
	{
		current = (node *)malloc(sizeof(node));
		printf("\nEnter id : ");
		scanf("%d",&current->id);
		current->next = NULL;
		if(i == 1)
		{
			l2head = current;
			prev = current;
		}
		else
		{
			prev->next = current;
			prev = current;
		}
	}
	
	end->next =l2head;
	current = l1head;
	
	i=1;
	printf("\n\nAppended Linked List Is : \n");
	while(current != NULL)
	{
		printf("\n\nElement\t : %d",i);
		printf("\nId\t : %d",current->id);
		current = current->next;
		i++;
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
