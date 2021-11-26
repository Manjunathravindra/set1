#include<stdio.h>
int addnum(int a, int b)
{
	int sum=a+b;
	return sum;
}
main()
{
	int a;
	int b;
	int s=0;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	s=addnum(a,b);
	printf("the sum of %d and %d:%d\n",a,b,s);
}
