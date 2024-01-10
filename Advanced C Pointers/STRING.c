#include<stdio.h>
#include<string.h>
str(char *p)
{
	printf("\nThe String Is :");
	printf("%s",p);
}

main()
{
	char str1[20];
	printf("\nEntere A String :");
	gets(str1);
	str(str1);
}
