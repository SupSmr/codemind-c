#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=0;
    for(;a!=0;a=a/10){
        int r=a%10;
        if(r>x) x=r;
    }
    printf("%d",x);
}