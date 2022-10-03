#include<stdio.h>
int factorial(int n){
    int a = 1;
    int i;
    for(i = n;i >= 1;i--)
    {
        a = a*i;
    }
    return a;

}
int main(){
    int n,m;
    scanf("%d",&n);
    m = factorial(n);
    printf("%d",m);
    return 0;    
}