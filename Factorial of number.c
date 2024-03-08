//modular c program to find factorial
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int main()
{
 int n,i;
 long int fact;
 printf("Enter an number\n");
 scanf("%d",&n);
 fact=1;
 for(i=n;i>=1;i--)
 {
  fact=fact*i;
 }
 printf("\nFactorial of %d is = %ld",n,fact);
 return 0;
}
