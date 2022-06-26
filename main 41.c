#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    
    long long biNum = 101001100101111;
    int size = ceil((floor(log10((biNum))) + 1)/ 4);
    char hexNum[size];
    int sum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < 4 && biNum > 0; j++){
            sum += biNum % 10 * pow(2,j);
            biNum /= 10;
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