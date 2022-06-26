#include <stdio.h>

void reverse (int a[], int i, int j){
    if(i >= j) {
        return;
    }
    int x = a[i];
    a[i] = a[j];
    a[j] = x;
    i++;
    j--;
    reverse(a, i, j);
}

int main()
{
    int a[3] = {1, 2, 3};
    int i = 0;
    int j = 2;
    reverse (a, i, j);
    for(i = 0; i <= 2; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

