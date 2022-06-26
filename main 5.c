#include <stdio.h>

int main()
{
    int num = 4;
    int j=num;
   for(int rows = 1; rows <= num; rows++){
        for(int y = num-rows; y > 0; y--)
            printf(" ");
        for(int c = 1; c <= rows; c++){
            printf("%d ", j);
            j--;
            if(j == 0)
            j = num;
        }
    printf("\n");
   }

    return 0;
}
