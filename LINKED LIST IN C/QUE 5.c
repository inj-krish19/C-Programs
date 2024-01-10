/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 5.)	Write a program to reverse a given linked list.

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
	
	node *current,*head,*prev,*new;
	
	head = (node *)malloc(sizeof(node));
	prev = (node *)malloc(sizeof(node));
	new = (node *)malloc(sizeof(node));
	
	printf("Enter Choice Till You Want To End :");
	scanf("%d",&choice);
	
	for(i=1;i<=choice;i++)
	{
		current = (node *)malloc(sizeof(node));
		printf("\nEnter id : ");
		scanf("%d",&current->id);
		if(i == 1)
		{
			current->next = NULL;
			head = current;
			prev = current;
		}
		else
		{
			current->next = prev;
			prev = current;
		}
	}
	
	printf("\nLinked List In Reverse Is : \n");
	
	i=1;
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
Enter Choice Till You Want To End :4

Enter id : 1

Enter id : 3

Enter id : 2

Enter id : 4

Linked List In Reverse Is :


Element  : 1
Id       : 4

Element  : 2
Id       : 2

Element  : 3
Id       : 3

Element  : 4
Id       : 1

-----------------------------------------------------------------------*/
