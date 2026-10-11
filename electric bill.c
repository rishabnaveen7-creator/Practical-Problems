#include<stdio.h>
#include<conio.h>
void main()
{
    int units,amount;
    printf("enter number of units units\n");
    scanf("%d",&units);
    if(units<=50)
    {
        amount=100;
    }
    else if((units>=51)&&(units<=200))
    {
        units=units-50;
        amount=100+units*4;

    }
    else if((units>=201)&&(units<=300))
    {
        units=units-200;
        amount=100+600+4+units*5+300;
    }
    else
    {
        units=units-300;
        amount=100+600+500+units*7+500;

    }
    printf("electricity bill = %d",amount);
    getch();
}