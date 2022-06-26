#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int * hexBi(char hex[]);

int main()
{
    char hex[3] = "ACC";
    int * p;
    p = hexBi(hex);
    for(int i = 0; i < strlen(hex) * 4; i++){
        printf("%d", *(p + i));
    }
    

    return 0;
}

int * hexBi(char hex[]){
    int k = (strlen(hex) * 4) - 1;
    int holder;
    int *biNum = calloc (strlen(hex) * 4, sizeof(int));
    for(int i = strlen(hex) - 1; i >= 0; i--){
        switch(hex[i]){
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
                holder = (int)(hex[i]) - 48;
        }
        for(int j = 0; j < 4; j++){
            biNum[k] = holder % 2;
            holder /= 2;
            k--;
            
        }
    }
    return biNum;
}