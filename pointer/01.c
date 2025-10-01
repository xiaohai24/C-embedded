#include <stdio.h>
#include <stdint.h>

uint8_t a = 10;
uint8_t* ptr = &a;

int main(){
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of ptr: %p\n", ptr);   
    printf("Address of ptr: %p\n", &ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    return 0;
}