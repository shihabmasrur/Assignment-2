#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int odd;
    for(int i = 1;i <= n;i++){

        odd = (i*2)-1;
        sum = sum + odd;
    }
    printf("%d",sum);
    return 0;
}
