//modular c program to print maximum of 2 numbers using pointers
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/#include<stdio.h>
int* maximum(int *pa,int *pb,int *pmax);
int main()
{
    int a,b;
    int*pa,*pb,*pmax;
    pa=&a;
    pb=&b;
    printf("Enter the two numbers\n");
    scanf("%d%d",pa,pb);
    pmax=maximum(pa,pb,pmax);
    printf("maximum is %d\n",*pmax);
    return 0;
}
int* maximum(int *pa,int *pb,int *pmax)
{
    if(*pa>*pb)
        return pa;
    else
        return pb;
}
