#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char rts[100];
    int i,j = 0;
    for(i = strlen(str) - 1;i >= 0;i--)
    {
        rts[j] = str[i];
        j++;
    }
    for(i = 0;i < strlen(str);i++)
    {
        printf("%c",rts[i]);
    }
    return 0;
}