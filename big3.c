#include<stdio.h>

void biggest()
{
	int a, b, c;
	
	printf("enter 3 numbers a, b, c:");
	scanf("%d %d %d", &a, &b, &c);

	if(a>=b && a>=c)
	printf("%d is the largest number.", a);
	
	else if(b>=a && b>=c)
	printf("%d is the largest number.", b);

	else
	printf("%d is the largest number.", c);

	// return 0;
}
