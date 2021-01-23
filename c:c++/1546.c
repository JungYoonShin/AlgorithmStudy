#include <stdio.h>

int main(void)
{
    int i;
    double a[1000];
    double average;
    scanf("%d",&i);
    double max=a[0];
    for(int j=0; j<i;j++){
        scanf("%lf",&a[j]);
        if(a[j]>max){
            max=a[j];
        }
    }
    double sum=0;
    for(int j=0; j<i;j++){
        a[j]=(a[j]/max)*100;
        sum=sum+a[j];
    }
    average=(sum/(double)i);
    printf("%lf",average);

    return 0;

}