#include<stdio.h>
int main()
{
    int a, b, t;
    printf("enter a,b\n");
    scanf("%d%d", &a, &b);
    t=a;
    a=b;
    b=t;
    printf("swapping with using temporary variable\n");
    printf("a = %d b = %d\n", a, b);
    a = (a + b) - (b = a);
    printf("swapping without using temporary variable\n");
    printf("a = %d b = %d\n", a, b);
    getchar();
    return 0;
}