#include <stdio.h>

int main(void)
{
    int n;
    int arr[21];
    arr[0]=0;
    arr[1]=1;
    for(int i=2; i<21; i++){
        arr[i]= arr[i-1] +arr[i-2];
    }
    scanf("%d", &n);
    printf("%d\n",arr[n]);
}