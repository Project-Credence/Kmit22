#include<stdio.h>
    int main()
    {
        int a,b,c;
        printf("Enter the values of a,b,c: ");
        scanf("%d %d %d",&a, &b, &c);
        if (a<b && a<c)
            printf( "Minimum is %d ",a);
        else if(b<a && b<c)
            printf(" Minimum is %d ",b);
        else
            printf(" Minimum is %d ",c);

        if (a>b && a>c)
            printf(" Maximum is %d ",a);
        else if(b>a && b>c)
            printf(" Maximum is %d ",b);
        else
            printf(" Maximum is %d ",c);
    }

