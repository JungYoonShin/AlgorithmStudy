#include<stdio.h>

int main()
{
    int n, a[15] = {0,};
    int count;
    scanf("%d", &n);

    for(int i=0;;i++){
        a[i] = n % 10;
        n = n / 10;
        if(n == 0){
            count = i+1;
            break;
        }
    }
    for(int k=0; k<15; k++){
        for(int j=0; j<14; j++){
            if(a[j] < a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for(int i=0; i<count; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}