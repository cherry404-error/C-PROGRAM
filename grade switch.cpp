#include<stdio.h>
main()
{char p;
printf( "Enter the Grade :  ");
scanf("%c",&p);
switch(p)
{
	case 'A': printf("\n EXCELLENT");
	break;
	case 'B': printf("\n Very Good");
	break;
	case 'C': printf("\n GOOD");
	break;
	case 'D': printf("\n POOR");
	break;
	case 'E': printf("\n VRY POOR");
	break;
default: printf("FAIL");

}






}
