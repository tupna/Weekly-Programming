#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m,l;
    for(m = 1;m <= n;m = m + 1){
        if(m % 2 == 0){
            for(l = 1;l <= n;l++){
                if(l % 2 == 0){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else if(m % 2 == 1){
            for(l = 1;l <= n;l++){
                if(l % 2 == 1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}