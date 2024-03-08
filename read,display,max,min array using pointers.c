/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/#include<stdio.h>
void read_array(int *ptr,int *pn);
void display_array(int *ptr,int *pn);
int average(int *ptr,int *pn);
int* maximum(int *ptr,int *pn);
int* minimum(int *ptr,int *pn);
int main()
{
    int num[20],n,*pn,*ptr,avg,*pmax,*pmin;
    ptr=num;
    pn=&n;
    printf("Enter n value\n");
    scanf("%d",pn);
    printf("Enter the array elements\n");
    read_array(ptr,pn);
    printf("\nThe array elements are\n");
    display_array(ptr,pn);
    avg=average(ptr,pn);
    printf("\nThe average is %d\n",avg);
    pmax=maximum(ptr,pn);
    printf("Maximum is %d\n",*pmax);
    pmin=minimum(ptr,pn);
    printf("Minimum is %d\n",*pmin);
    return 0;
}
void read_array(int *ptr,int *pn)
{
    int i;
    for(i=0;i<*pn;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
}
void display_array(int *ptr,int *pn)
{
    int i;
    for(i=0;i<*pn;i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
}
int average(int *ptr,int *pn)
{
    int avg,total=0;
    int i;
    for(i=0;i<*pn;i++)
    {
        total=total+*ptr;
        ptr++;
    }
    avg=total/ *pn;
    return avg;
}
int* maximum(int *ptr,int *pn)
{
    int max=0,i,*pmax;
    for(i=0;i<*pn;i++)
    {
        if(max<*ptr)
        {
            max=*ptr;
            pmax=ptr;
        }
        ptr++;
    }
    return pmax;
}
int* minimum(int *ptr,int *pn)
{
    int min=9999,i,*pmin;
    for(i=0;i<*pn;i++)
    {
        if(min>*ptr)
        {
            min=*ptr;
            pmin=ptr;
        }
        ptr++;
    }
    return pmin;
}
