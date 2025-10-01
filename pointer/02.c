#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t x;
    uint32_t y;  
    uint64_t z;
} RE;

RE *ptr;

void main(){
    printf("Size of RE: %d\n", sizeof(RE));
    printf("Size of ptr: %d\n", sizeof(ptr));
}