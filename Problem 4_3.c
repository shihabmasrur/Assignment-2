#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int even;
    int sum = 0;
    for(int i = 1; i <= n;i++){
        even = i*2;
        sum = sum + even;
    }
    printf("%d",sum);
    return 0;
}
