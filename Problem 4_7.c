#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int calculation = 10;
    int sum = 0;
    for(int i = 1; i <= n;i++){

        sum = sum + calculation;
        calculation = calculation * 3;

    }
    printf("%d",sum);
    return 0;
}
