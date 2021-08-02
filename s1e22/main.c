#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[128];

    printf("Please enter url of FishC: ");
    scanf("%s", str);

    //printf("The URL of FishC Studio is: %s\n", str);

    printf("The address of str is: %p\n", str);
    printf("The address of the first element in str is: %p\n", &str[0]);

    return 0;
}
