#include <stdio.h>

int main()
{
    
    int num = 10452;
    int arr[5];
    for(int i = 0; num > 0; i++){
        arr[i] =  num % 8;
        num /= 8;
    }
    for(int i = sizeof(arr)/sizeof(arr[0]) - 1; i >= 0; i--)
        printf("%d", arr[i]);

    return 0;
}
