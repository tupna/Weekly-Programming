#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i,j;
    for(i = strlen(str);i >= 1;i--)
    {
        for(j = 0;j < i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
    return 0;
}