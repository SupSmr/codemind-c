#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int x=0,y=1;
    printf("%d %d ",x,y);
    for(int i=1;i<=a-2;i++){
        int z=x+y;
        x=y;
        y=z;
        printf("%d ",z);
    }
}
