//modular c program to multiply 7 four times
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int multiply(int i,int product);
int main()
{
    int i,product;
    i=1,product=1;
    while(i<=4)
    {
        product=product*7;
        printf("Product is %d\n",product);
        i++;
    }
}
