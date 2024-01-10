/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 1.)	Write a program to create a singly linked list
			and display its elements in FIFO pattern.
			Also display the number of elements in the list.
*/
#include<stdio.h>
main()
{
	int i;
	struct linked_list{
		int id;
		char name[10];
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
		printf("\nEnter Name : ");
		scanf("%s",current->name);
		
		
		current->next = NULL;
		//and that was first writted below prev->next
		if(i == 1)
		{
			head = current;
		//	head->next = NULL; that was also current at 1st time
			prev = current;
		}
		else
		{
			prev->next = current;
			prev = current;
		}
	}
	
	
	current = head;
	
	printf("\nLinked List In FIFO Is : \n");
	
	i=1;
	while(current != NULL)
	{
		printf("\n\nElement\t : %d",i);
		printf("\nId\t : %d",current->id);
		printf("\nName\t : %s",current->name);
		current = current->next;
		i++;
	}
}


/*

OUTPUT : 

-----------------------------------------------------------------------
Enter Choice Till You Want To End :5

Enter id : 1

Enter Name : VISHAL

Enter id : 2

Enter Name : MOHIT

Enter id : 3

Enter Name : JARIWALA

Enter id : 4

Enter Name : DEV

Enter id : 5

Enter Name : KRISH

Linked List In FIFO Is :


Element  : 1
Id       : 1
Name     : VISHAL

Element  : 2
Id       : 2
Name     : MOHIT

Element  : 3
Id       : 3
Name     : JARIWALA

Element  : 4
Id       : 4
Name     : DEV

Element  : 5
Id       : 5
Name     : KRISH
-----------------------------------------------------------------------*/
