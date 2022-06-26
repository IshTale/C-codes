#include <stdio.h>

int main()
{
    
    int num = 65;
    int biNum[7];
    for(int i = 0; num > 0; i++){
        biNum[i] = num % 2;
        num /= 2;
    }
    for(int i = sizeof(biNum)/sizeof(biNum[0]) - 1; i >= 0; i--){
        printf("%d", biNum[i]);
    }

    return 0;
}
