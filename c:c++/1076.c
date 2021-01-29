#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char *color[11]= {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    char order[3][10];
    long long num, result=0;
    scanf("%s %s %s", order[0], order[1], order[2]);
    for(int i=0; i<10; i++){
        if(strcmp(color[i],order[0])==0){
            result += i*10;
        }
        if(strcmp(color[i],order[1])==0){
            result += i;
        }
        if(strcmp(color[i],order[2])==0){
            num = pow(10,i);
        }
    }
    printf("%lld\n", result*num);

    return 0;
}