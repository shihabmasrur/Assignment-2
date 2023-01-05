#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int series = 3;

    for(int i = 1; i <= n; i++){
        printf("%d ",series);
        series = series + 3;

    }
    return 0;
}
