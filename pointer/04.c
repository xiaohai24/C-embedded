#include <stdio.h>
#include <stdint.h>

void mFunction(void* ptr, uint8_t size){
    if(size ==1){
        uint8_t *p = *(uint8_t*)ptr;
        printf("*p8: %u\n", p);
    }

    if(size ==2){
        uint16_t *p = *(uint16_t*)ptr;
        printf("*p16: %u\n", p);
    }
}

void main(){
    uint8_t a = 10;
    uint16_t b = 20;

    uint8_t* pA = &a;
    uint16_t* pB = &b;

    mFunction(pA, sizeof(a));
    mFunction(pB, sizeof(b));
}