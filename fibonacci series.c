//modular c program to print Fibonacci series
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int main()
{
 int n,a=0,b=1,c;
 printf("Enter the n value\n");
 scanf("%d",&n);
 {
   printf("The fibonacci series is\n");
   for(int i=1;i<=n;i++)
   {
   printf("%d\n",a);
   c=a+b;
   a=b;
   b=c;
   }

 }

}
