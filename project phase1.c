#include <stdio.h>
#include <stdlib.h>

int main()
	
{
	
int ch,pl,lp,stot=0,gtot=0;	
printf("Welcome To Hotel");
while(lp)
{
	printf("\n\nMenu:\n1 Samosa 20/-\n2 Dosa  30/-\n3 Tea  10/-\n0 Exit");
	printf("\nEnter Your Choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	
	printf("\nEnter Number Of Plates: ");
	scanf("%d",&pl);
	stot=20*pl;
	printf("SubTotal=%d",stot);
    gtot=gtot+stot;

break;
case 2:
	
	printf("\nEnter Number Of Plates: ");
	scanf("%d",&pl);
	stot=30*pl;
	printf("SubTotal=%d",stot);
	gtot=gtot+stot;	
	
	break;
	case 3:
	
	printf("\nEnter Number Of Plates: ");
	scanf("%d",&pl);
	stot=10*pl;

	printf("SubTotal=%d",stot);
	gtot=gtot+stot;
	
	break;
	case 0:
	
	lp=0;
	printf("\nGrandTotal=%d",gtot);
	printf("\nT H A N K  Y O U!!!");
	
	break;
	default:
	printf("\nWrong Choice");
	}
	
}
return 0;
}


