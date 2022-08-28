#include<stdio.h>
int main(){
    int n,i;
    while(1)
    {
    scanf("%d",&n);
    int j = 1;
    for(i = 2;i < n;i++)
    {
        if(n % i == 0)
        j=0;
    }
    if(j==1)
    break;
    }
    return 0;
}