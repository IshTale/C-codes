#include <stdio.h>

int main()
{
    int num = 509;
    for(int x = 1; x <= num; x++){
        for(int y = num - x; y > 0; y--)
            printf(" ");
        for(int z = x; z > 0; z--)
        printf("* ");
    printf("\n");
    }
    for(int x = num - 1; x > 0; x--){
        for(int y = num - x; y > 0; y--)
            printf(" ");
        for(int z = x; z > 0; z--)
        printf("* ");
    printf("\n");
    }
    return 0;
}

