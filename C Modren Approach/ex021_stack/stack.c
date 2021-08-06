/*
 * Name: stack.c
 * Purpose: Simulates a stack.
 * Author: Richard T. Yang
 */
 #include <stdbool.h>

 #define STACK_SIZE 100

 int contents[STACK_SIZE];
 int top = 0;

 void make_empty(void);
 bool is_empty(void);
 bool is_full(void);
 void push(int);
 int pop(void);

int main(void)
{
    return 0;
}

