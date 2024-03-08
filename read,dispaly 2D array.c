//modular c program to read n display 2D array
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/
#include<stdio.h>
#define ROW 10
#define COL 10
void readarray(int num[ROW][COL],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
    scanf("%d",&num[i][j]);
   }
 }
}
void displayarray(int num[ROW][COL],int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
    printf("%d ",num[i][j]);
   }
 }
}
int main()
{
 int num[ROW][COL];
 int m,n;
 printf("Enter number of rows and colums\n");
 scanf("%d%d",&m,&n);
 printf("Enter row and col elements\n");
 readarray(num,m,n);
 printf("The row and col elements are\n");
 displayarray(num,m,n);
 return 0;
}
