#include <stdio.h>

int main(void)
{
    int x, count=0;
    int num=0;
    scanf("%d",&x);
    for(int i=1; ;i++){
        for(int j=1; j<=i; j++){
            count++;
            if(count==x){
                if(i%2!=0){
                    printf("%d/%d\n", i-j+1, j);
                    num=1;
                    break;
                }
                else{
                    printf("%d/%d\n", j, i-j+1);
                    num=1;
                    break;

                }
            }
        }
        if(num==1){
            break;
        }
    }
    return 0;
}