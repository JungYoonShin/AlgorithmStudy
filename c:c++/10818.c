#include <stdio.h>

int main(void)
{
    int N, max, min;
    int a[1000001];
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(int i=1; i<N; i++){
        if(max<a[i]){
            max = a[i];
        }
        else if(min>a[i]){
            min = a[i];
        }
    }
    printf("%d %d\n", min, max);
}