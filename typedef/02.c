#include <stdio.h>

typedef struct {
    int x;
    float y;
    char c;
} point;

point p;

int main(){
    p.x = 10;
    p.y = 3.14;
    p.c = 'A';
    printf("x=%d, y=%.2f, c='%c'\n", p.x, p.y, p.c);
    return 0;
}