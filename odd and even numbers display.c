//modular to c program to display even and odd natural numbers
#include<stdio.h>
void odd_natural_nos(int n);
void even_natural_nos(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    odd_natural_nos(n);
    even_natural_nos(n);
    return 0;
}
void odd_natural_nos(int n)
{
    int i=1;
    printf("The odd natural numbers are\n");
    while(i<=n){
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
void even_natural_nos(int n)
{
    int i=1;
    printf("The even natural numbers are\n");
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
