//modular c program to print digits of an integer
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
void displaydigits(int num);
int main()
{
  int num;
  printf("Enter the number\n");
  scanf("%d",&num);
  displaydigits(num);
  return 0;
}
void displaydigits(int num)
{
 int r;
 while(num!=0)
 {
  r=num%10;
  printf("%d\n",r);
  num=num/10;
 }
}
