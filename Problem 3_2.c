#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int odd = 1;
    for(int i = 1; i <= n; i++){
        printf("%d ",odd);
        odd = ((i*2) + 1);


    }
    return 0;
}
