#include <stdio.h>

int main(void)
{
    int n, a[1001]={0,};
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int k=0; k<n; k++){
        for(int j=0; j<n-1; j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d\n", a[i]);
    }
    return 0;
}