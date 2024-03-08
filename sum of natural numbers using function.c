//c program to find sum of natural numbers
/*Name:Pooja v gadad
  Roll No:521
  Division:E
  Date:8/03/2024
*/
#include<stdio.h>
int sum_of_nos(int n);
int main()
{
int n,sum;
printf("Enter the value of n\n");
scanf("%d",&n);
sum=sum_of_nos(n);
printf("The sum of %d natural numbers is %d\n",n,sum);
return 0;
}
int sum_of_nos(int n)
{

int i,sum=0;
for(i=1;i<=n;i++)
{
sum=sum+i;
}

return sum;
}

