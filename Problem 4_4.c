#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int calculation;

    for(int i = 1; i <= n;i++){
        calculation = i * 3;
        sum = sum + calculation;
    }
    printf("%d",sum);
    return 0;
}
