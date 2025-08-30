#include<stdio.h>
int main(void)
{
    int i=1,n1=0,n2=1,y,n;
    printf("Enter number=");
    scanf("%d",&n);
    while (i<=n){
        printf("%d",n1);
        y=n1+n2;
        n1=n2;
        n2=y;
        
        
        i++;
    }
    
}
