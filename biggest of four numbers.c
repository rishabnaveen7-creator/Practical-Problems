#include<stdio.h>
#define BIG(x,y)(x>y?x:y)
void main()
{
    int a,b,c,d,big1,big2,big3;
    printf("enter a,b,c,d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    big1=BIG(a,b);
    big2=BIG(c,d);
    big3=BIG(big1,big2);
    printf("biggest = %d",big3);
    getchar();

}