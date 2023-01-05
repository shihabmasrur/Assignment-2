#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int calculation = 1;
    int sum = 1;
    for(int i = 1; i <= n;i++){
        calculation = pow(i,2);
        sum = sum + calculation;



    }
    printf("%d",sum);
    return 0;
}
