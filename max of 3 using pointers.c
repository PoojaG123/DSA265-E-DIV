//modular c program to print max of 3 using pointers
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/#include<stdio.h>
int* maximum(int *pa,int *pb,int *pc);
int main()
{
    int a,b,c,*pa,*pb,*pc,*pmax;
    pa=&a;
    pb=&b;
    pc=&c;
    printf("Enter the numbers\n");
    scanf("%d%d%d",pa,pb,pc);
    pmax=maximum(pa,pb,pc);
    printf("Maximum is %d\n",*pmax);
    return 0;


}
int* maximum(int *pa,int *pb,int *pc)
{
    if(*pa>*pb)
    {
        if(*pa>*pc)
            return pa;
        else
            return pc;
    }
    else
    {
        if(*pb>*pc)
            return pb;
        else
            return pc;
    }
}
