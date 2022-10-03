#include<stdio.h>
int main(){
    char str[999];
    scanf("%s",str);
    int n = 0,A = 0,a = 0;
    while(str[n] != '\0')
    {
        n++;
    }
    for(int i = 0;i < n;i++)
    {
        if(str[i] >= 'A'&& str[i] <= 'Z')
        A++;
        else if(str[i] >= 'a'&& str[i] <= 'z')
        a++;
    }
    printf("UPPER:%d,lower:%d",A,a);
    return 0;
}