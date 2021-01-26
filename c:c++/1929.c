#include <stdio.h>

int main(void)
{
    //에라토스테네스의 체
    int n, m;
    int num[1000001]={0,};
    num[1]=1;
    scanf("%d %d", &m, &n);
    for(int i=2; i<=n; i++){
        if(num[i]==1){
            continue;
        }
        for(int j=i*i; j<=n; j+=i){
            if(j%i==0){
                num[j]=1;
            }
        }
    }
    for(int i=m; i<=n; i++){
        if(num[i]==0){
            printf("%d\n", i);
        }
    }
    return 0;
    
}