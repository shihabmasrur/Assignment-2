#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int calculation = 1;
    int sum = 0;
    for (int i = 1;i <= n;i++){

        sum = sum + calculation;
        calculation = pow(2,i);

    }
    printf("%d",sum);
    return 0;
}
