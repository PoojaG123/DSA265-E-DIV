//modular c program to print reverse number
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int main()
{
 int n,r,sum=0;
 printf("Enter the number\n");
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  sum=sum*10+r;
  n=n/10;
 }
 n=sum;
 printf("The number after reversal is\n");
 printf("%d",n);
 return 0;
}
