#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i,j,k = strlen(str) - 1,l = strlen(str);
    char rts[l][l];
    for(i = 0;i < l;i++)
    {
        for(j = 0;j < l;j++)
        {
            if(j > k)
            {
                rts[i][j] = '\0';
                continue;
            }
            rts[i][j] = str[j];
        }
        k--;
    }
    for(i = 0;i < l;i++)
    {
        for(j = 0;j < l;j++)
        {
            printf("%c",rts[i][j]);
        }
        printf("\n");
    }
    return 0;
}