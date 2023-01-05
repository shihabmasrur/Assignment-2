#include <stdio.h>

int main(){
    int n,i;
    int calculation;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        calculation = n % 3;
        calculation = i - calculation;
    }
    printf("%d", calculation);

    return 0;
}
