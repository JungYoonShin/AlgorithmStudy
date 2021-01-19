#include <stdio.h>

int main(void)
{
    int max, order;
    int num[9];
    for(int i=0; i<9; i++){
        scanf("%d", &num[i]);
    }
    max = num[0];
    for(int i=0; i<9; i++){
        if(max <= num[i]){
            max = num[i];
            order = i + 1;
        }
    }
    printf("%d\n%d\n", max, order);

    return 0;
}