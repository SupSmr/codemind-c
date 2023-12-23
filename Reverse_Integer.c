#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a;
    int rev=0;
    for(;a!=0;a=a/10){
        int r=a%10;
        rev=rev*10+r;
    }
    printf("%d",rev);
}