#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    scanf("%d %d %d",&a,&b,&c);
    if(a < b &&a < c)
    {
        d = a;
    }
        else if(b < a &&b < c)
        {
            d = b;
        }
        else if(c < a &&c < b)
        {
            d = c;
        }
        if((a > b &&a < c) ||(a > c &&a < b))
        {
            e = a;
        }
        else if((b > a &&b < c) ||(b > c &&b < a))
        {
            e = b;
        }
        else if((c > a &&c < b)||(c > b &&c < a))
        {
            e = c;
        }
    sum = d + e;
    printf("%d",sum);
    return 0;
}