#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("enter the numbers to swap\n");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d and b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping a=%d and b=%d",a,b);
	return 0;
}
