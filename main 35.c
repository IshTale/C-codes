#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    char *str = "223A";
    long num = 0;
    int holder;
    char c;
    for(int i = 0; i < strlen(str); i++){
        switch(str[strlen(str) - i - 1]) {
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
                c = str[strlen(str) - i - 1];
                holder = (int)(c) - 48;
        }
        num += (holder * pow(16, i));
    }
   
        
    printf(" %ld", num);

    return 0;
}


