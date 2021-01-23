#include <stdio.h>

int main(void)
{
    int a,b, min;
    int divisor, multiple;
    scanf("%d %d", &a, &b);
    if(a>b){
        min = b;
    }
    else{
        min = a;
    }
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            divisor = i;
        }
    }
    multiple = a*b / divisor;
    printf("%d\n%d\n", divisor, multiple);

}