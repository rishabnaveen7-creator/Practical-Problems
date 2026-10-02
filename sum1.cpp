#include <iostream>
#include <conio.h>

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
{
    std::cout << "Enter the size of the array: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the elements of the array: " << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}

void rishsort::insertion()
{
    for(int i = 1; i < n; i++)
    {
        int j = i - 1;
        while(j >= 1)
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
    std::cout << "The sorted array is: " << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << a[i] << "\t";
    }
    std::cout << std::endl;
}

int main()
{
    rishsort r;
    r.input();
    r.insertion();
    r.output();
    getch();
    return 0;
}