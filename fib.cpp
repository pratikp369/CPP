#include<stdio.h>
int main()
{
	int n,a,b,fib,temp,i;
	printf("Enter Number :");
	scanf("%d",&n);
	i=0;
	a=0;
	b=1;
	fib=a+b;
	temp=fib;
	while(i>n)
	{
		temp=temp+fib;
	}
	printf("the fibb is %d",temp);
	i++;
}
