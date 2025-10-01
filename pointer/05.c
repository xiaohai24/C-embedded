#include<stdio.h>
#include <stdint.h>
#define cnt 3

void func1(){
    printf("func1\n");
}

void func2(){
    printf("func2\n");
}

void func3(){
    printf("func3\n");
}

void (*mFunction[cnt])() = {func1, func2, func3};

int main(){
    for(int i=0; i<cnt; i++){
        mFunction[i]();
    }
}