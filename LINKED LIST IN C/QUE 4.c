/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 4.)	Write a program to create an ordered linked list.
*/
#include<stdio.h>
main()
{
	struct linked_list{
		int id;
		struct linked_list *next;
	};
	
	typedef struct linked_list node;
	
	int i,j,choice;
	node *current,*prev,*head,*new,*backup,*one,*three;
	
	current = (node *)malloc(sizeof(node));
	head = (node *)malloc(sizeof(node));
	prev = (node *)malloc(sizeof(node));
	new = (node *)malloc(sizeof(node));
	backup = (node *)malloc(sizeof(node));
	printf("\nEntering Data In Sorted Way Is Important\n");
	printf("\nEnter Choice Till You Want To End :");
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
	
	current = head;
	backup = head;
	
	printf("\nEnter New Id : ");
	scanf("%d",&new->id);
	
	for(i=1;i<=choice;i++)
	{
		
		if(new->id > prev->id && new->id < current->id)
		{
			prev->next = new;
			new->next = current;
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
	
	current = head;
	i = 1;
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

Entering Data In Sorted Way Is Important

Enter Choice Till You Want To End :4

Enter id : 1

Enter id : 2

Enter id : 4

Enter id : 5

Enter New Id : 3


Element  : 1
Id       : 1

Element  : 2
Id       : 2

Element  : 3
Id       : 3

Element  : 4
Id       : 4

Element  : 5
Id       : 5


-----------------------------------------------------------------------*/
