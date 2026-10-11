#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter a,b\n");
    scanf("%d %d",&a,&b);
    c = a - (-b);
    d = a + ~b + 1;
    printf("sum = %d sub = %d",c,d);
    getch();
}