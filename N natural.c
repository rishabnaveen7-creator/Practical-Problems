#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter a natural number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }   
    printf("sum = %d",sum);
    getch();
}