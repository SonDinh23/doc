#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t n;
    uint16_t sum;
    uint16_t temp = 1;
    do
    {
        printf("Input: ");
        scanf("%d",&n);
    } while (n<0);
    
    for (uint8_t i = 1 ; i<=n ; i++) {
        temp*=i;
        sum+=temp;
        printf("Output: %d\n\n",sum);
    }

    // printf("Output: %d\n\n",sum);

    return 0;
}