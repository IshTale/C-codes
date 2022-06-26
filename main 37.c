#include <stdio.h>
#include <math.h>

int main()
{
    
    long long biNum = 111110101100;
    int size = ceil((floor(log10((biNum))) + 1)/ 3);
    int octNum[size];
    int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 3 && biNum > 0; j++){
            sum += biNum % 10 * pow(2,j);
            biNum /= 10;
        }
        octNum[i] = sum;
        sum = 0;
    }
    for(int i = sizeof(octNum)/sizeof(octNum[0]) - 1; i >= 0; i--){
        printf("%d", octNum[i]);
    }
    

    return 0;
}
