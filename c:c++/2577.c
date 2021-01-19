#include <stdio.h>

int main(void)
{
    int a, b, c, new;
    int num[10]={0,};
    scanf("%d\n%d\n%d",&a,&b,&c);
    new = (a*b*c);
    while(1){
        num[new%10]++;
        new = new /10;   
        if(new < 1){
            break;
        }
    }
    for(int i=0; i<10; i++){
        printf("%d\n", num[i]);
    }
    return 0;
}