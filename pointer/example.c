int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("%d %d %d %d %d %d", *ptr, ++*ptr++, (*ptr)++, *ptr++, *++ptr,++*ptr);
    return 0;
}