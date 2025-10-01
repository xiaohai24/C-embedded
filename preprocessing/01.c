#include <stdio.h>
#include <stdint.h>

// #define PI 3.14

#ifdef PI
    void func(){
        printf("PI is defined as: %f\n", PI);
    }
#else
    void func(){
        printf("PI is not defined.\n");
    }       
#endif

int main(){
    func();
    return 0;
}