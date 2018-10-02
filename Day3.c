#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s",&str);
    int a = strlen(str);
    printf("%d",(26*a)+26-a);
}
