#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10000];
        scanf("%s",str);
        for(int i = 0; i<strlen(str); i += 2)
        printf("%c",str[i]);
        printf(" ") ;
        for(int i = 1; i<strlen(str); i += 2)
        printf("%c",str[i]);
        printf("\n");
    }  
    return 0;
}
