#include <stdio.h>

int main(void)
{
    int num[10];
    int result=0;
    for(int i=0; i<10; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<10; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            if(num[i]%42 == num[j]%42){
                sum = 1;
            }
        }
        if(sum==0){
            result++;
        }
    }
    printf("%d\n",result);
    return 0;
}