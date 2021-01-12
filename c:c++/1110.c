#include <stdio.h>

void cal(int x);
int a,b,result,c,x;
int cycle = 0;
int new = 0;
int main(void)
{
    scanf("%d",&x);
    result=x;
    cal(x);
    return 0;

}
void cal(int x){
    cycle++;
    new = ((x%10)*10)+((x%10+x/10)%10);
    if(new==result && cycle!=0){
        printf("%d\n", cycle);
    }
    else{
        cal(new);
    }
}