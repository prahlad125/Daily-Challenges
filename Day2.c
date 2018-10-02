 // prahlad's code
 #include <stdio.h>
 
 int main()
 {
     int i, n, t1 = 1, t2 = 1, nextTerm,sum = 0;
     scanf("%d", &n);
     
     for (i =1 ; i <=n; ++i)
     {
         sum =sum+ t1;
         nextTerm = t1 + t2;
         t1 = t2;
         t2 = nextTerm;
     }
     printf("%d",sum);
     return 0;
 }
