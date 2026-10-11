#include <stdio.h>

int main(){
    int n;
    scanf("%d,&n");
    int alpha[15], omega [15];
    for (int i = 0; i < n; i++){
        scanf("%d", &alpha[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &omega[i]);
    }
    int*ptr = alpha;
    int*ptr2 = omega;
    for(int i=0;i<n;i++){
        if(*(ptr + i) > *(ptr2 + i)){
        printf("No\n");
        return 0;
        }
    }
    printf("Yes\n");

    return 0;
    printf
}