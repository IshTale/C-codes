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
    int biNum[(int)((floor(log10(oct)) + 1) * 3)];
    for(int i = 0; i < (floor(log10(oct)) + 1) * 3; i++){
        biNum[i] = *(p + i);
    }
    free(p);
    int size = (float)(sizeof(biNum)/sizeof(biNum[0]))/ 4;
    char hexNum[size];
    int sum = 0;
    int k = ((floor(log10(oct)) + 1) * 3) - 1;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 4 && k >= 0; j++){
            sum += biNum[k] % 10 * pow(2,j);
            biNum[k] /= 10;
            k--;
        }
        switch(sum) {
            case 10 :
                hexNum[i] = 'A';
                break;
            case 11 :
                hexNum[i] = 'B';
                break;
            case 12 :
                hexNum[i] = 'C';
                break;
            case 13 :
                hexNum[i] = 'D';
                break;
            case 14 :
                hexNum[i] = 'E';
                break;
            case 15 :
                hexNum[i] = 'F';
                break;
            default  :
                hexNum[i] = sum + '0';
        }
        sum = 0;
    }
    for(int i = strlen(hexNum) - 1; i >= 0; i--){
        printf("%c", hexNum[i]);
    }
    

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
