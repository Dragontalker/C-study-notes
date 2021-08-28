#include <stdio.h>
#include <stdlib.h>

size_t fib(size_t);

int main(void)
{
    printf("The Fibonacci number of 10  = %u\n", fib(10));

    return EXIT_SUCCESS;
}

size_t fib(size_t n) {

    if (n < 3) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}
