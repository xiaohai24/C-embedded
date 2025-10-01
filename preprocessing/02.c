#include <stdio.h>  
#include <stdint.h>

#define PI 3.14

#ifndef PI
    #error "PI is not defined"
#else 
    void func(){
        printf("PI is defined as: %f\n", PI);
    }
#endif

void main(){
    func();
    return;
}