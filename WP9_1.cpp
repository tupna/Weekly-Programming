#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int A = 0,a = 0;
    int i;
    for(i = 0;i < strlen(str);i++)
    {
        if(str[i] >= 'A'&& str[i] <= 'Z')
        A++;
        else if(str[i] >= 'a'&& str[i] <= 'z')
        a++;
    }
    printf("UPPER:%d,lower:%d",A,a);
    return 0;
}