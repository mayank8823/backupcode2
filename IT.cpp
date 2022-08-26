#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the integers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>>b && a>>c){
        printf("A is the gratest number that is = %d",a);
    }
    else if(b>>c && b>>a)
    {
        printf("B is the gratest number that is = %d",b);
    }
    else
    {
        printf("C is the gratest number that is = %d",c);
    }

}
