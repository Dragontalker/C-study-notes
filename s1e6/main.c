#include <stdio.h>


int main()
{
    int i;
    char j;
    float k;

    i = 123;
    j = 'C';
    k = 3.14;

    printf("size of int is %d\n", sizeof(int));
    printf("size of i is %d\n", sizeof(i));
    printf("size of char is %d\n", sizeof(char));
    printf("size of j is %d\n", sizeof(j));
    printf("size of float is %d\n", sizeof(float));
    printf("size of k is %d\n", sizeof(k));

    printf("short int = %d\n", sizeof(short));
    printf("int = %d\n", sizeof(int));
    printf("long int = %d\n", sizeof(long));
    printf("long long int = %d\n", sizeof(long long));
    return 0;
}
