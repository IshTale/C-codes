#include <stdio.h>
#include <math.h>

int main()
{
    
    int octnum = 24324;
    int num = 0;
    for(int i = 0; octnum > 0; i++){
        num += (octnum % 10) * pow(8,i);
        octnum /= 10;
    }
    printf("%d", num);

    return 0;
}

