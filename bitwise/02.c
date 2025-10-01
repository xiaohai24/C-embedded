#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t data = 0x00000000;

    data |= (1 << 3); //set bit 3 -> 1
    printf("%d\n",data);

    data &= ~(1 << 3); //set bit 3 -> 0
    printf("%d\n",data);

    data ^= (1 << 3); //đảo bit 3 từ 0 -> 1
    printf("%d\n",data);

    return 0;
}