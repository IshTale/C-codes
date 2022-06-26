#include <stdio.h>
#include <string.h>

int main()
{
    
    int num = 768321;
    char hexnum[5];
    int holder;
    for(int i = 0; num > 0; i++){
        holder =  num % 16;
        switch(holder) {
            case 10 :
                hexnum[i] = 'A';
                break;
            case 11 :
                hexnum[i] = 'B';
                break;
            case 12 :
                hexnum[i] = 'C';
                break;
            case 13 :
                hexnum[i] = 'D';
                break;
            case 14 :
                hexnum[i] = 'E';
                break;
            case 15 :
                hexnum[i] = 'F';
                break;
            default  :
                hexnum[i] = holder + '0';
        }
        num /= 16;
    }

    for(int i = strlen(hexnum) - 1; i >= 0; i--){
        printf("%c", hexnum[i]);
    }
    

    return 0;
}

