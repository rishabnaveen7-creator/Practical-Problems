#include <stdio.h>
#include <math.h>

int main(){
    int base, height;
    double hypotenuse;
    
    scanf("%d %d", &base, &height);
    
    hypotenuse = sqrt(pow(base, 2) + pow(height, 2));
    
    printf("Hypotenuse: %f\n", hypotenuse);
    
    return 0;
}