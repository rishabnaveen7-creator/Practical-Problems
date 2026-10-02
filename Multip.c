#include<stdio.h>

int main()
{
    //int length= 3;
    //int breadth= 4;
    int length, breadth;
    printf("enter length\n");
    scanf("%d", &length);
    printf("enter breadth\n");
    scanf("%d", &breadth);

    printf("the area of this rectangle is %d", length*breadth);
    return 0;
}