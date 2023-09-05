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
    
    for (uint8_t i = 1; i<=n ;i++) {
        sum+= 1.0/(2*i);
    }

    printf("Output %.2f\n\n",sum);
    return 0;
}