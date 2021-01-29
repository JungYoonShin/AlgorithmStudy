#include<stdio.h>

int main()
{
    int n,a,b,cnt=0;

    scanf("%d %d %d", &n, &a, &b);

    while(a != b){
        a = a-a/2;
        b = b-b/2;
        cnt+=1;
    }
    
    printf("%d\n", cnt);
    return 0;
}