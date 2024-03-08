//modular c program to print Star series
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the n value\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("* ");
  }
  printf("\n");
 }
 return 0;
}
