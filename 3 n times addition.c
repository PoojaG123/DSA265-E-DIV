//modular c program to add anumber 3 n times
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int addition(int n);
int main()
{
   int n,sum;
   printf("Enter how many times to add a number\n");
   scanf("%d",&n);
   //function call
   sum=addition(n);
   printf("Sum is %d\n",sum);
   return 0;
}
//function definition
int addition(int n)
{
    int i,sum=0;
    i=1;
    while(i<=n)
    {
        sum=sum+3;
        i++;

    }
    return sum;
}


