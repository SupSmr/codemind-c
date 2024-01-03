#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=0;
    for(int i=1;i<a;i++){
        if(a%i==0) x=x+i;
    }
    if(x>a)printf("True");
    else printf("False");
}