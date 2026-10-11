#include <stdio.h>

int main(){
    int n,i,j,a[10];
    printf("Enter size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element [%d][%d]: ",i,i);
        scanf("%d",&a[i]);
    }
    printf("\nMatrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            printf("%d ",a[i]);
            else
            printf("0 ");
        }
          printf("\n");

    }
    return 0;
}