By prahlad125, contest: Codeforces Round #352 (Div. 2), problem: (B) Different is Good, Accepted, #
 #include<stdio.h>
#include<string.h>

int main(){
    int a,count=0;
    scanf("%d",&a);
    if(a<=26){
    char str[a];
    scanf("%s",&str);
    for (int i=0;i<a;i++){
        for (int j=i+1;j<a;j++){
            if (str[i]==str[j]&&str[i]!=0){
                str[j]=0;
                count++;
            }
        }
    }
    printf("%d",count);
    }
    else printf("-1");
}
