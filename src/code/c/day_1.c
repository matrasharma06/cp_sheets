#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int i2;
    double d2;
    char s2[47];
    scanf("%d %lf\n%[^\n]", &i2, &d2, s2);
    printf("%d\n%.01lf\n%s%s", i + i2, d + d2, s, s2);
    return 0;
}