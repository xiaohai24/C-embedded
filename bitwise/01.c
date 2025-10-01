#include <stdio.h>

int main(){

    int data;
    scanf("%d",&data);
    
    if(data &1)
        printf("lẻ\n");
    else
        printf("chẵn\n");   
}