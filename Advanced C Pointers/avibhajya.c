// C program to check whether number is prime or not
#include <stdio.h>

int main()
{
	// code
	int n ;
	int m = n - 1;
	int factm = 1;
	int i;
// find factorial of n-1
printf("Enter Value :");
scanf("%d",&n);
	for (i = 1; i <= m; i++) {
		factm *= i;
	}

// add 1 to (n-1)!
	int factn = factm + 1;
	if (factn % n == 0) {
		// if remainder is 0
		printf(" %d is prime number",n);
	}
	else {
		printf("%d is not prime number",n);
	}
}
// this code is contributed by KRISH LEGEND

