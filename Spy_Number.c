#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum=0,p=1;
    for(;a!=0;a=a/10){
        int r=a%10;
        sum=sum+r;
        p=p*r;
    }
    if(sum==p)printf("Spy Number");
    else printf("Not Spy Number");
}