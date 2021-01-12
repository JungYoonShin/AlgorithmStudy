#include <stdio.h>

int main(void)
{
    int count[123]={0,};
    char alphabet[1000001];
    scanf("%s",alphabet);
    for(int j=0; alphabet[j]; j++){
        if(alphabet[j]<95){
            count[alphabet[j]+32]++;
        }
        count[alphabet[j]]++;
    }
    int max = count[0];
    int result;
    for(int i=97; i<123; i++){
        if(count[i]>max){
            max = count[i];
            result = i;
        }
    }
    int num=0;
    for(int i=97; i<123; i++){
        if(max==count[i]){
            num++;
        }
    }
    if(num>1){
        printf("?\n");
    }
    else{
        printf("%c\n", result - 32);
    }
    return 0;
}
