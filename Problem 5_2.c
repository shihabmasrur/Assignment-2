#include<stdio.h>
int factorial(int a){

    int result = 1;
    for(int i = 1; i <= a;i++){
        result = result * i;
    }

    return result;
}
int main(){
    int n,r;
    scanf("%d%d",&n,&r);
    int calculation = factorial(n) / factorial(n - r);
    printf("%d",calculation);
    return 0;
}
