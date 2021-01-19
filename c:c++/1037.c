#include <stdio.h>

int divisor[51];
int check(int);
int main(void)
{
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &divisor[i]);
    }
    printf("%d\n", check(N));
    return 0;
}
int check(int x)
{
    int temp;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x - 1; j++){
            if (divisor[j] > divisor[j + 1]){                      
                temp = divisor[j];
                divisor[j] = divisor[j + 1];
                divisor[j + 1] = temp;           
            }
        }
    }
    return divisor[0] * divisor[x-1];
    
}