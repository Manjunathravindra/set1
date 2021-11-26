#include<stdio.h>
int input()
{
	return 0;
}
int sum(int a,int b)
{
	int s=a+b;
	return s;
}
void output(int a, int b, int s)
{
	printf("the sum of %d and %d is:%d ",a,b,s);
	
}
main()
{
	int a,b,s=0,t=0,n=0;
	printf("enter the value for a:");
	scanf("%d",&a);
	printf("enter the value for b:");
	scanf("%d",&b);
	n=input();
	s=sum(a,b);
	output(a,b,s);
}
