//modular c program to print small letter alphabets
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
int main()
{
 int i;
 char alphabet;
 alphabet=97;
 for(i=1;i<=26;i++)
 {
  printf("%c ",alphabet);
  alphabet=alphabet+1;
 }
 return 0;
}
