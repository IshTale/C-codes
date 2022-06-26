#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int * octBi(int oct);
 
int main()
{
    int oct = 357;
    int * p;
    p = octBi(oct);
    for(int i = 0; i < (floor(log10(oct)) + 1) * 3; i++){
        printf("%d", *(p + i));
    }
    free(p);

    return 0;
}

int * octBi(int oct){
    int k = ((floor(log10(oct)) + 1) * 3) - 1;
    int holder;
    int *biNum = calloc ((floor(log10(oct)) + 1 )* 3, sizeof(int));
    for(int i = floor(log10(oct)); i >= 0; i--){
        holder = oct % 10;
        for(int j = 0; j < 3; j++){
            biNum[k] = holder % 2;
            holder /= 2;
            k--;
            
        }
        oct /= 10;
    }
    return biNum;
}
