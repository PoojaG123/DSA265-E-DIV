//modular c program to print palindrome
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int main()
{
  int n,temp,sum=0,r;
  printf("Enter the number\n");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
   r=n%10;
   sum=sum*10+r;
   n=n/10;
  }
  n=temp;
  if(n==sum)
  {
   printf("Number is palindrome\n");
  }
  else
  {
  printf("Number is not palindrome\n");
  }
}
