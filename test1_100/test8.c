#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t n;
    float sum;
    do
    {
        printf("Input value: ");
        scanf("%d",&n);
    } while (n<0);
    
    for (uint8_t i = 0; i<=n ;i++) {
        sum+= (float)(2^n+1)/(2^n+2);
    }
    printf("Output: %.2f\n\n",sum);
    return 0;
}