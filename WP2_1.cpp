#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m,l;
    for(m = 1;m <= n;m = m + 1){
        for(l = 1;l <= n;l = l + 1){
            if((m % 2 == 1) && l % 2 == 1){
                printf("*");
            }
            else if(m % 2 == 0 && l % 2 == 0){
                printf("*");

            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}