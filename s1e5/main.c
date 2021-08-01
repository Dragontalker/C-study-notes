#include <stdio.h>

#define URL "http://www.fichc.com"
#define NAME "YuC Studio"
#define BOSS "Xiao JiaYu"
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main()
{
    printf("%s established at year%d, month%d, day%d\n", NAME, YEAR, MONTH, DAY);
    printf("%s is established by %s...\n", NAME, BOSS);
    printf("The url for %s is %s...\n", NAME, URL);
    return 0;
}
