#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
   printf("enter a,b:\n");
   scanf("%d%d",&a,&b);
   temp=a;
   a=b;
    b=temp;
    printf("swapping with using temporary variable \n");
    printf("a=%d b=%d\n",a,b);
    a=(a+b)-(b=a);
    printf("swapping without using temporary variable \n");
    printf("a=%d b=%d\n",a,b);
    getch();

    

}
