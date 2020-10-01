#include<stdio.h>
void fun();
int b=10,c=5;
main()
{
	printf("In main B=%d and C=%d \n",b,c);
	fun();
	b++;
	c--;
	printf("in main b=%d and c=%d \n",b,c);
	
}
void fun()
{b++;
c--;
printf("in function b=%d and c=%d \n",b,c);
}
