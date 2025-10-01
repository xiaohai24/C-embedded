#include <stdio.h>
#include <stdint.h>

typedef struct{
    uint8_t x;
    uint8_t y;
    uint8_t z;
} DATA;

void main(){
    printf("Size of DATA struct: %zu bytes\n", sizeof(DATA));
    // Size of DATA struct: 4 bytes, phụ thuộc vào kiểu dữ liệu lớn nhất làm size cơ sở
    // 1 byte + 1 byte + 1 byte + 1 byte padding = 4 byte
}