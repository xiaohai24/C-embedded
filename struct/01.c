#include <stdio.h>
#include <stdint.h>

typedef struct{
    uint8_t x;
    int y;
    uint8_t z;
} DATA;

void main(){
    printf("Size of DATA struct: %zu bytes\n", sizeof(DATA));
    // Size of DATA struct: 12 bytes, phụ thuộc vào kiểu dữ liệu lớn nhất làm size cơ sở
    // 1 byte + 3 byte padding + 4 byte + 1 byte + 3 byte padding = 12 byte
}