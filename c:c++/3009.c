#include <stdio.h>

int main(void)
{
    int x[1001]={0,};
    int y[1001]={0,};
    int a, b;
    for(int i=0; i<3; i++){
        scanf("%d %d", &a, &b);
        x[a]++;
        y[b]++;
    }
    for(int i=0; i<=1000; i++){
        for(int j=0; j<=1000; j++){
            if(x[i]==1 && y[j]==1){
                printf("%d %d\n", i, j);
                break;
            }
        }
    
    }
    return 0;
}