#include<stdio.h>


int main(){
    int n;
    scanf("%d", &n);

    int calc = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            calc = calc + 1;
        }
    }
    if(calc==2){
            printf("Prime Number");
    }
    else{
       printf("Not Prime");
    }
    return 0;
}
