/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 6.)	Write a program to calculate the summation of 
			all elements of the linked list.

*/
#include<stdio.h>
main()
{
	int i;
	struct linked_list{
		int id;
		struct linked_list *next;
	};
	
	int choice,ele_sum=0,sum_id=0;
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
	i=1;
	while(current != NULL)
	{
		ele_sum = i + ele_sum;
		sum_id = current->id + sum_id;
		current = current->next;
		i++;
	}
	printf("\nSum Of All Elements Is : %d",ele_sum);
	printf("\n\nSum Of All Id Is : %d",sum_id);
}

/*

OUTPUT : 

-----------------------------------------------------------------------

Enter Choice Till You Want To End :5

Enter id : 1

Enter id : 8

Enter id : 9

Enter id : 2

Enter id : 5

Sum Of All Elements Is : 15

Sum Of All Id Is : 25

-----------------------------------------------------------------------
*/
