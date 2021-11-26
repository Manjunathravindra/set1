#include<stdio.h>
float input()
{
	return 0.0;
}
float my_sqrt(float n)
{
	float x;
	float t=0;
	float l=0;
	printf("enter the value of x:");
	scanf("%f",&x);
	t=(x+n/x)/2;
	l=(t+n/t)/2;
	return l;
	
	
}
void output(float n, float c)
{
	printf("the square root of %f is:%f",n,c);
}

main()
{
	float n;
	float b=0.0;
	float c=0.0;
	printf("enter the value for a:");
	scanf("%f",&n);
	b=input();
	c=my_sqrt(n); 
	output(n,c);
	
	
	
	
	
}
