#include<stdio.h>
int great(int, int);

main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=great(a,b);
	printf("greatest number is  %d",c);
	int d,e,f;
	printf("enter two numbers");
	scanf("%d%d",&d,&e);
	f=great(d,e);
	printf("greatest number is  %d",f);
}
int great (int a,int b)
{
	if(a>b)
	return(a);
	else
	return(b);
}
