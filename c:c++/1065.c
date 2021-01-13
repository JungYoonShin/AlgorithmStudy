#include <stdio.h>

int main(void)
{
    int N, num, new, count;
    int a[3];
    scanf("%d",&N);
    if(N<100){
        num=N;
        printf("%d\n", num);
    }
    else if(N>=100){
        num=99;
        for(int i=100; i<=N; i++){
            if(i==1000){
                break;
            }
            count=0;
            new = i;
            while(count<3){
                a[count] = new % 10;
                new = new / 10;
                count++;
            }
            if(a[0]-a[1] == a[1]-a[2]){
                num++;
            }
        }
        printf("%d\n", num);
    }

}
