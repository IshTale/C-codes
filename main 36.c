#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char hexNum[4] = "223A";
    long num = 0;
    int octNum[5];
    int holder;
    char c;
    for(int i = 0; i < strlen(hexNum); i++){
        switch(hexNum[strlen(hexNum) - i - 1]) {
            case 'A' :
                holder = 10;
                break;
            case 'B' :
                holder = 11;
                break;
            case 'C' :
                holder = 12;
                break;
            case 'D' :
                holder = 13;
                break;
            case 'E' :
                holder = 14;
                break;
            case 'F' :
                holder = 15;
                break;
            default  :
                holder = (int)(hexNum[strlen(hexNum) - i - 1]) - 48;
        }
        num += (holder * pow(16, i));
    }

    for(int i = 0; num > 0; i++){
        octNum[i] =  num % 8;
        num /= 8;
    }
    for(int i = sizeof(octNum)/sizeof(octNum[0]) - 1; i >= 0; i--)
        printf("%d", octNum[i]);

    return 0;

    return 0;
}
