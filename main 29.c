#include <stdio.h>
#include <math.h>

int main()
{
    int biNum = 10001;
    int num = 0;
    for(int i = 0; biNum > 0; i++){
        num += ((biNum % 10) * pow(2, i));
        biNum /= 10;
    }
    printf("%d ", num);

    return 0;
}
