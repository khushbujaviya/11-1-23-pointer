//1 find square of each element using Pointer.

#include<stdio.h>
main()
{
	int n;

	int m;
	int *p;

	
	printf("enter value");
	scanf("%d",&n);
	m=n*n;
	p=&m;
	printf("%u => %d",p,*p);
}
