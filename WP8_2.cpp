#include<stdio.h>
int factorial(int n){
    if(n==0)
    return 1;
    else
    return(n*factorial(n - 1));
}

int main(){
    int n,m;
    scanf("%d",&n);
    m = factorial(n);
    printf("%d",m);
    return 0;
}