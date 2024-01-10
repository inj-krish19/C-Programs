/*
 NAME - SHAH KRISH J.
 ROLL NO. - 47
 SUBJECT - ADVANCED PROGRAMMING
 COURSE - COMPUTER SCIENCE
 TOPIC - PROGRAM OF LINKED LISTS
 
QUE - 3.)	Write a menu driven program to create a singly linked list 
			and perform  following operations on it:
				a.) Insert an element 
				b.) Delete an element
				c.) Display the list
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	struct linked_list{
		int id;
		struct linked_list *next;
	};
	
	typedef struct linked_list node;
	
	int i,n,x,loop=0;
	int choice;
	char ch;
	node *current = (node *)malloc(sizeof(node));
	
	node *head = (node *)malloc(sizeof(node));
	node *prev = (node *)malloc(sizeof(node));
	node *new = (node *)malloc(sizeof(node));
	
	printf("Enter Choice Till You Want To End :");
	scanf("%d",&choice);
	
	for(i=1;i<=choice;i++)
	{
		current = (node *)malloc(sizeof(node));
		printf("\nEnter id \t:");
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
	prev = current;
	
	printf("\n\n\ni for Insert an element \nd for Delete an element \ns for Display the list \ne for Exit\n\nEnter Choice : ");		
	getchar();
	scanf("%c",&ch);
		
		switch(ch)
		{
			case 'D'://d
			case 'd'://D
		
							//DELETION LOGIC 	
							printf("\nEnter Choice Where You Want To Delete:");
							scanf("%d",&n);	
							
							if(n > choice)
							{
								printf("\nNot Possilble");
							}
						
							for(i=1;i<=5;i++)
							{						
								if(n == 1)
								{
									head = head->next;
									break;
								}
								else if(i == n)
								{
									prev->next = current->next;	
									break;
								}
								else
								{
									prev = current;
									current = current->next;
								}
							}
							
							current = head;
							
							i = 1;
							
							printf("\nLinked List Is : \n");
							
							while(current != NULL)
							{
								printf("\n\nElement\t : %d",i);
								printf("\nId\t : %d",current->id);
								current = current->next;
								i++;
							}					
							choice = choice - 1;	
							break;
	
			case 'i'://I
			case 'I'://i
	
							//INSERTION LOGIC 
							printf("\nEnter New id \t:");
							scanf("%d",&new->id);
		
							printf("\nEnter Choice of Which Number You Want To Insert :");
							scanf("%d",&n);
							getchar();
	
							if(n > choice+1)
							{
								printf("\nNot Possilble");
							}
							else
							{
								for(i=1;i<=5;i++)
								{
									if(n == 1)
									{
										new->next = head;
										head = new;
										x = 1;
										break;
									}
									else if(i == n)
									{	
										prev->next = new;
										new->next = current;	
										x = 1;
										break;
									}
									else	
									{
										prev = current;
										current = current->next;
										x = 0;
									}
								}	
								if(i == n && x == 0 )
								{
									prev->next = new;
									new->next = NULL;
								}					
							}
							current = head;
							prev = current;
							i = 1;
								
							printf("\nLinked List Is : \n");
							while(current != NULL )
							{	
								printf("\n\nElement\t : %d",i);
								printf("\nId\t : %d",current->id);
								current = current->next;
								prev = current;
								i++;		
							}
							choice = choice + 1;
							break;

			case 's'://S
			case 'S'://s
							
							printf("\nLinked List Is : \n");
							current = head;
	
							i = 1;
							while(current != NULL)
							{
								printf("\n\nElement\t : %d",i);
								printf("\nId\t : %d",current->id);
								current = current->next;
								i++;
							}
	
							break;
							
			case 'e'://E
			case 'E'://e
							printf("\nExited");
							exit(0);
	
			default :
			
							printf("\nInvalid Choice");
							break;
		}
}
		


/*

OUTPUT :
--------------------------------------------------------------

TRY 1 :

*****************
Enter Choice Till You Want To End :3

Enter id        :1

Enter id        :3

Enter id        :5



i for Insert an element
d for Delete an element
s for Display the list
e for Exit

Enter Choice : s

Linked List Is :


Element  : 1
Id       : 1

Element  : 2
Id       : 3

Element  : 3
Id       : 5

*****************************

TRY 2 :

*****************************

Enter Choice Till You Want To End :3

Enter id        :1

Enter id        :3

Enter id        :5



i for Insert an element
d for Delete an element
s for Display the list
e for Exit

Enter Choice : i

Enter New id    :7

Enter Choice of Which Number You Want To Insert :4

Linked List Is :


Element  : 1
Id       : 1

Element  : 2
Id       : 3

Element  : 3
Id       : 5

Element  : 4
Id       : 7

*************************

TRY 3 :

*************************

Enter Choice Till You Want To End :5

Enter id        :2

Enter id        :4

Enter id        :5

Enter id        :6

Enter id        :8



i for Insert an element
d for Delete an element
s for Display the list
e for Exit

Enter Choice : d

Enter Choice Where You Want To Delete:3

Linked List Is :


Element  : 1
Id       : 2

Element  : 2
Id       : 4

Element  : 3
Id       : 6

Element  : 4
Id       : 8

**************************

TRY 4 :

**************************

Enter Choice Till You Want To End :1

Enter id        :1



i for Insert an element
d for Delete an element
s for Display the list
e for Exit

Enter Choice : E

Exited

--------------------------------------------------------------*/
