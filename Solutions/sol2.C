/*wap to enter any number and check it is prime number or not.*/
#include<stdio.h>
#include<conio.h>
void main()
{
      int a,i,count=0;
      clrscr();
      printf("\n enter any prime number:");
      scanf("%d",&a);
      for(i=2;i<=a/2;++i)
      {
	 if(a%i==0)
	 {
	     count=1;
	     break;
	 }
      }
      if(count==0)
	  printf("%d is prime number",a);
      else
	  printf("%d is not prime number",a);
      getch();
}