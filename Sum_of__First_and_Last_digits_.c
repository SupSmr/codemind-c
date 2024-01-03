#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=a%10;
    int rev=0;
    for(;a!=0;a=a/10){
        int r=a%10;
      rev=rev*10+r;
    }
    int y=rev%10;
    printf("%d",x+y);
}