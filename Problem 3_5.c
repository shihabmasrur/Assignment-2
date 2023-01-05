#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int calculation = 1;
    for(int i = 1; i <= n;i++){
        printf("%d ",calculation);
        calculation = calculation * 2;
    }
    return 0;
}
