#include <stdio.h>

int
main ()
{
    int num = 5;
    int x = 2;
    int y = 2;
    int i;
    int counter;;
    for(counter = 1; counter <= num;){
        for(i = 2; i > 1;){
            y = 2;
            while(y < x){
                if(x % y == 0){
                    i = 1;
                    break;
                }
                y++;
            }
            if(i == 2){
                counter++;
                printf("%d ", x);
                break;
            }
        }
        x++;
    }

  return 0;
}

