#include <stdio.h>
#include <stdlib.h>

int gtot=0,sqty=0,dqty=0,tqty=0;
int menu()
{
	int ch;
	printf("\n1.Samosa\n");
	printf("2 Dosa\n");
	printf("3 Tea\n");
	printf("0 Exit\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	return ch;
}

void order(int ch,int rate)
{
	int qty;
	printf("Enter Number Of  ");
	if(ch==3)
	printf("Cups: ");
	else
	printf("Plats: ");
	scanf("%d",&qty);
	billing(rate,qty);
	if(ch==1)
	sqty=sqty+qty;
	if(ch==2)
	dqty=dqty+qty;
	if(ch==3)
	tqty=tqty+10;
}
void billing(int rate,int qty)
{
	int stot;
	stot=rate*qty;
	gtot=gtot+stot;
}
  void bill()
{
	int count=1;
	printf("\n::Your Bill::");
	printf("\n srno. |   Item  |  Qty\t |  Rate  |  Sub Total|");
	printf("\n________________________________________________________________________________");
	if(sqty!=0)
	printf("\n %d    |  samosa |  %d\t |   20    |    %d   | ",count++,sqty,sqty*20);
	if(dqty!=0)
	printf("\n %d    |   dosa\t|  %d\t |   30    |    %d   | ",count++,dqty,dqty*30);
	if(tqty!=0) 
	printf("\n %d    |     Tea\t|  %d\t |   10    |    %d  |",count++,tqty,tqty*10);
	printf("\n________________________________________________________________________________");
	printf("\n                                                              Grand Total:%d/-",gtot);
	}
void note(gtot)
{
	int a=0;
    a=gtot/2000;
    gtot=gtot%2000;
     if(a!=0)
    printf("\n%d notes of 2000",-1*a);
    a=gtot/500;
    gtot=gtot%500;
     if(a!=0)
    printf("\n%d notes of 500",-1*a);
    a=gtot/200;
    gtot=gtot%200;
     if(a!=0)
    printf("\n%d notes of 200",-1*a);
    a=gtot/100;
    gtot=gtot%100;
     if(a!=0)
    printf("\n%d notes of 100",-1*a);
    a=gtot/50;
    gtot=gtot%50;
     if(a!=0)
    printf("\n%d notes of 50",-1*a);
    a=gtot/20;
    gtot=gtot%20;
     if(a!=0)
    printf("\n%d notes of 20",-1*a);
    a=gtot/10;
    gtot=gtot%10;
     if(a!=0)
     printf("\n%d notes of 10",-1*a);
    a=gtot/5;
    gtot=gtot%5;
     if(a!=0)
    printf("\n%d notes of 5",-1*a);
	a=gtot/2;
    gtot=gtot%2;
	 if(a!=0)
	printf("\n%d notes of 2",-1*a);
	a=gtot/1;
    gtot=gtot%1;
	 if(a!=0)
	printf("\n%d notes of 1",-1*a);
}
void printbill()
{
	int cash=0,lp=1;
	printf("\nGrandTotal %d",gtot);
	while(lp)
	{
printf("\nEnter Your Cash : ");
scanf("%d",&cash);
gtot=gtot-cash;
if(gtot==0)
{
printf("\nT H A N K  Y O U!!");
lp=0;
}
if(gtot<0)
{
printf("\nReturn : %d\n",gtot*-1);
note(gtot);
printf("\nT H A N K  Y O U!!!");
lp=0;
}
if(gtot>0)
{
printf("\n%d rs more\n",gtot);
}
}
}

int main()
{
int ch,lp=1,a=0;
printf("Welcome To Hotel\n");
while(lp)
{
ch=menu();
switch(ch)
{
case 1:
order (ch,20);
break;
case 2:
order (ch,30);
break;
case 3:
order (ch,10);
break;
case 0:
lp=0;
bill();
printbill();
break;
default:
printf("Wrong input!\n");
break;
}
}
}




	
	
	
