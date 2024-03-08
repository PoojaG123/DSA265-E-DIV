//modular c program to swap two numbers
/*
  Name:Pooja V gadad
  Roll No: 521
  Date :08/03/2024
  Div: E
*/#include<stdio.h>
void swap(int *pa,int *pb);
int main()
{
    int a,b;
    int*pa,*pb;
    pa=&a;
    pb=&b;
    printf("Enter the two numbers\n");
    scanf("%d%d",pa,pb);
    swap(pa,pb);
    printf("Numbers after swap are %d %d\n",*pa,*pb);
    return 0;
}
void swap(int *pa,int *pb)
{
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
