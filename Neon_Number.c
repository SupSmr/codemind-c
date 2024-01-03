#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    int s=a*a;
    for(;s!=0;s=s/10){
        int r=s%10;
        sum=sum+r;
    }
    if(a==sum)printf("Neon Number");
    else printf("Not Neon Number");
}