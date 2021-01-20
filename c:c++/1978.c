#include <stdio.h>

int main(void)
{
    int num[101];
    int N;
    int count = 0; 
    int decimal = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &num[i]);
    }
    for(int i=0; i<N; i++){
        for(int j=2; j<num[i]; j++){
            if(num[i] % j==0){
                count++;
                break;
            }
        }
        if(count==0 && num[i]!=1){
            decimal++;
        }
        count = 0;
    }
    printf("%d\n", decimal);

    return 0;
}
