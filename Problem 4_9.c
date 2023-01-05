#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int one = 1;
    int two = 2;
    int mult;
    int sum = 0;
    for(int i = 1; i <= n;i++){
        mult = one * two;
        sum = sum + mult;
        one = one + 1;
        two = two + 1;



    }
    printf("%d",sum);
    return 0;
}
