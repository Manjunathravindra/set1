#include<stdio.h>
int sum_n()
{
	return 0;
}
int sum_n(int n)
{
	int s;
	s=n(n+1)/2;
	return s;
}
void output(int n,int s)
{
	printf("the sum of number(1 to %d)is %d",n,s);
}
main()
{
	int n,t=0;
	printf("enter the value for n:");
	scanf("%d",&n);
	t=sum_n(n);
	output(n,t);
}
