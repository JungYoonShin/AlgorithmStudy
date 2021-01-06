#include <stdio.h>

int factorial(int);
int main(void){
    int N;
    scanf("%d",&N);
    printf("%d\n",factorial(N));
}
int factorial(int a)
{
    if (a<=1){
        return 1;
    }
    return a * factorial(a-1);
}
