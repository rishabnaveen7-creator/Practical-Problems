#include <iostream>
#include <conio.h>
#include <stdlib.h>

class rishsort
{
    private:
    int a[100], n;
    public:
    void input();
    void insertion();
    void output();
};

void rishsort::input()
cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }   
void rishsort::insertion()
{
    for(int i = 1; i < n; i++)
    {   
    j = i - 1;
    while(j > = 1)

    {
        if(a[j] > a[j - 1])
        {   
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
        j--;
    }
    }       
}

void rishsort::output()
{
    cout<<"The sorted array is: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
}
void main()
{                   
    rishsort r;
    r.input();
    r.insertion();
    r.output();
    getch();
}