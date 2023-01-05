#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int even = 2;
    for(int i = 1; i <= n;i++){
        even = 2 * i;
        printf("%d ",even);

    }
    return 0;
}
