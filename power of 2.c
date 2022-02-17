#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float k;
	printf("enter any non negative integer: ");
	scanf("%d",&x);
	k=(log(x))/(log(2));
	if(k-(int)k == 0)
	{
		printf("the number %d is a power of 2...",x);
	}
	else
	{
		printf("the number %d is not a power of 2!!!",x);
	}
}
