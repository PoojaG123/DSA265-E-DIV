//c program to find maximum of three numbers
/*Name:Pooja v gadad
  Roll No:521
  Division:E
  Date:8/03/2024
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        printf("Maximum is %d\n",num1);
        else
        printf("Maximum is %d\n",num3);
    }
    else
    {
        if(num2>num3)
        printf("Maximum is %d\n",num2);
        else
        printf("Maximum is %d\n",num3);
    }
    return 0;
}
