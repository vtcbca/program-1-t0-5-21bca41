//armstrong number.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,re,sum=0,e=0,no;
    clrscr();
    printf("\n Enter a number:");
    scanf("%d",&re);
    no=re;
    while(re!=0)
    {
       a=re%10;
       e=a*a*a;
       re=re/10;
       sum=sum+e;
    }
       if(no==sum)
	 printf("%d is an armstrong number:",no);
       else
	 printf("%d is not an armstrong number:",no);
    getch();
}