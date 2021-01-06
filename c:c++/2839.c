#include <stdio.h>

int main(void)
{
    int n, bag = 0;
    scanf("%d", &n);
 
    while (1) {
        if (n % 5 == 0) {
            bag += n / 5;
            printf("%d\n", bag);
            break;
        }
 
        n = n - 3;
        bag++;
 
        if (n < 0) {
            printf("-1\n");
            break;
        }
    }
}
