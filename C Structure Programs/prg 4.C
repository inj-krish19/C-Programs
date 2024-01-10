#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{
/*int arr[10],n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	printf("arr[%d]=",i);
	scanf("%d",&arr[i]);
	
}
printf(" enter index number \n");
scanf("%d",&n);
*/
// struct decleration
struct po{
	int p,r;
};
struct po pi={3,4};

// struct decleration

struct elop
{
	float e_s;
	int age;
	char arr[10];
}s1={ 23300.00,19,"boss"},s2{34000.00,20,"vishal"};
// new data type decleration circle;
typedef struct
{
	float pi,r;
	
}circle;

circle c={3.14,6*6};

printf("circle pi  value  %f \n r value %f\n ",c.pi,c.r);

printf("two value %d  %d \n",pi.p,pi.r);
printf(" employee s.... %f \nemployee age %d\n employee name %s \n",s1.e_s,s1.age,s1.arr);

printf(" employee s.... %f \nemployee age %d\n employee name %s \n",s2.e_s,s2.age,s2.arr);

s2=s1;
if(s2.e_s==s1.e_s && s2.age==s1.age &&s2.arr==s1.arr)
{
	printf("same brother ");
}
else
{
	printf(" not same brother");
}

}






























	


