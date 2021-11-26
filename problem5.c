#include<stdio.h>
int cmp(int a, int b,int c)
{
	if((a>b)&&(a>c))
	{
		return a;
	}
	else if((b>c)&&(b>a))
	{
		return b;
		
	}
	else
	{
		return c;
	}
}
void output(int a,int b,int c,int s)
{
	printf("among %d,%d,%d.%d is greatest",a,b,c,s);
}
main()
{
	int a,b,c,s=0;
	printf("enter the value for the a:");
	scanf("%d",&a);
	printf("enter the value for the b: ");
	scanf("%d",&b);
	printf("enter the value for the c: ");
	scanf("%d",&c);
	s= cmp(a,b,c);
	output(a,b,c,s);
	
}
