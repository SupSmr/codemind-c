#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a;j++){
            if(i%2!=0)
            printf("1 ");
            else printf("0 ");
        }
        printf("
");
    }
}
