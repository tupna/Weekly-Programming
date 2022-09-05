#include<stdio.h>
int main(){
    float arr[10],sum = 0;
    int i;
    for(i = 0;i < 10;i++)
    {
        scanf("%f",&arr[i]);
    }
    i=0;
    while(i < 10)
    {
        sum += arr[i];
        i++;
    }
    sum /= 10;
    printf("%.2f",sum);
    return 0;
}