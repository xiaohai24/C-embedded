#include <stdio.h>
#include <stdint.h>

uint8_t *a;
uint32_t *b;
uint8_t arr[5] = {0,1,2,3,4};

int main(){

    a = (uint8_t*)&arr[0];
    b = (uint32_t*)&arr[0];
    a++; b++;
    printf("a: %d b: %d\n", *a, *b);   //a=1, b=4
}