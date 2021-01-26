#include <stdio.h>

int main(void)
{
    //에라토스테네스의 체
    int n, count=0;
    int num[246913] = {0,};
    for(int i=2; i<246913; i++){
        if(num[i]==1){
            continue;
        }
        for(int j= i*i; j<246913; j+=i){
            if(j%i==0){
                num[j]=1;
            }
        }
    }
    scanf("%d", &n);
    while(n!=0){
        count=0;
        for(int i=n+1; i<=2*n; i++){
            if(num[i]==0){
                count++;
            }
        }
        printf("%d\n",count);
        scanf("%d", &n);
    }
    return 0;
}