#include <stdio.h>
int main()
{
    int x,y;
    for (int i=1; i<=5;i++){
        for (int j = 1;j<=5;j++){
            int temp;
            scanf("%d",&temp);
            if (temp == 1){
                x=i;y=j;
            }
        }
    }
    printf("%d",abs(x-3)+abs(y-3));
}
