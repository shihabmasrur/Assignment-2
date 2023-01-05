#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int two = 2;
    int five = 5;
    int mult;
    int sum = 0;
    for(int i = 1; i <= n;i++){
        mult = five * two;
        sum = sum + mult;
        two = two * 2;
        five = five + 3;



    }
    printf("%d",sum);
    return 0;
}
