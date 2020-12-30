#include <stdio.h>

int main(void)
{
    int i,j;
    char s[101]={};
    int num[26]={0, };

    scanf("%s",s);
    for(i='a';i<='z';i++){
        for(j=0; j<100; j++){
            if(s[j]==i){
                num[i-97]=j+1;
                break;
            }
        }
    }
    for(i=0; i<26; i++){
        printf("%d ",num[i]-1);                                                                                                                              
    }  
    printf("\n");
    
    return 0;
}