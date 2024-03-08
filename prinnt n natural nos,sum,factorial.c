//modular c program to print n natural numbers and sum and factorial
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
void print_nos(int n);
int addition(int n);
int factorial(int n);
int main()
{
    int n,sum,res;
    printf("Enter the n value\n");
    scanf("%d",&n);
    print_nos(n);
    sum=addition(n);
    res=factorial(n);
    printf("Sum is %d\n",sum);
    printf("Factorial is %d\n",res);
    return 0;
}
void print_nos(int n)
{
    int i=1;
    printf("The natural numbers are\n");
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }

}
int addition(int n)
{
    int i=1,sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    return sum;
}
int factorial(int n)
{
    int i=1,res=1;
    while(i<=n)
    {
        res=res*i;
        i++;
    }
    return res;
}
