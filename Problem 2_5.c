#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int series = 0;
    printf("1 ");

    for(int i = 1; i <= n; i++){


        if(i % 2 == 0){
            printf("%d ",i);
        }

        else{
            printf("");
        }


    }


    return 0;
}
