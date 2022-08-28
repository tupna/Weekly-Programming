#include<stdio.h>
int main(){
    int n;
    while(1)
    {
        scanf("%d",&n);
        int i = 2,j = 2;
        while(i <= n)
        {
            if(n % i != 0)
            j++;
            i++;
        }
        if(j==n)
        break;
    }
    return 0;
}