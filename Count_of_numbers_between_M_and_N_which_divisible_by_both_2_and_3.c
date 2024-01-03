#include<stdio.h>
int main()
{
    int a,b;
    int count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++){
        if(i%2==0 && i%3==0)
        count++;
    }
    printf("%d",count);
}