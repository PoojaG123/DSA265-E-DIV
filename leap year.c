//modular c program to print all leap years from 1 to n
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int leapyear(int year)
{
if((year%400==0)||(year%4==0&&year%100!=0))
  return 1;
else
  return 0;
}
int main()
{
 int i,n;
 printf("Enter the value of N: ");
    scanf("%d",&n);

    printf("Leap years from 1 to %d:\n",n);
    for(i=1;i<=n;i++)
    {
        if(leapyear(i))
            printf("%d\t",i);
    }

    return 0;
}
