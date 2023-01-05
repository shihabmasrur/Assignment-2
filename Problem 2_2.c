#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 0){
        for(int i = 1; i < n; i++){
            if(i % 2 == 0){
                printf("");
            }
            else{
                printf("%d ", i);
            }
        }
    }
    else{
        for(int i = 1; i <= n; i++){
             if(i % 2 == 0){
                printf("");
            }
            else{
                printf("%d ", i);
            }
        }
    }

    return 0;
}
