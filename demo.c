#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<n; i++)
    {
        if((i*(i+1))/2==n)
    {
        printf("Yes");
        break;
    }
     else if((i*(i+1))/2>n)
    {
        printf("No");
        break;
      }
   }
    return 0;
}