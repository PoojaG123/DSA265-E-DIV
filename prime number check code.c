#include<stdio.h>
void prime_check(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    prime_check(n);
    return 0;
}
void prime_check(int n)
{
    int count=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 2)
        printf("Number is prime\n");
    else
        printf("Not prime number\n");

}




