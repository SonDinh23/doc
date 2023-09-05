#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t n;
    uint16_t sum = 0;
    do
    {
        printf("Input value:\t");
        scanf("%d",&n);
    } while (n<0);
    
    for (uint8_t i = 1; i<=n ; i++) {
        sum += (i^2);
    }

    printf("Output value: %d",sum);

    return 0;
}