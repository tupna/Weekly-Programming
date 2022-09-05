#include<stdio.h>
int main(){
    float arr[10],sum = 0;
    int i;
    for(i = 0;i < 10;i++)
    {
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    sum /= 10;
    printf("%.2f",sum);
    return 0;
}