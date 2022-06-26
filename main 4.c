#include <stdio.h>

int main()
{
   int num = 4;
   for(int rows = 1; rows <= num; rows++){
        int j=num;
        for(int y = num-rows; y > 0; y--)
            printf(" ");
        for(int c = 1; c <= rows; c++){
            printf("%d ", j);
            j--;
        }
    printf("\n");
   }

    return 0;
}
