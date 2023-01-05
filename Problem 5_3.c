#include<stdio.h>


int main(){
    int a,n;
    scanf("%d%d",&a,&n);
    int calculation = 1;
    for(int i = 1; i <= n ; i++){
        calculation = a * calculation;
    }
    printf("%d",calculation);
}

