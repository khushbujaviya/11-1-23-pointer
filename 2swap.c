// 2 swap two variables using Pointer.
#include<stdio.h>
main()
{
	int i;
	int j;
	int *a;
	int *b;
	printf("enter two value");
	scanf("%d%d",&i,&j);
    
	a=&i;
	b=&j;
	
	
	printf("%u => %d\n",a,*a);
	printf("%u => %d\n",b,*b);
	
}
