#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void main()
{
    int a,b,c,disc,rp,ip,x,y;

    printf("Enter the a Coefficient\n");
    scanf("%d",&a);

     printf("Enter the b Coefficient\n");
    scanf("%d",&b);

     printf("Enter the c Coefficient\n");
    scanf("%d",&c);

    disc=b*b - 4*a*c;

    if(disc==0)
    {
     x=y=b*b/2*a;
     printf("Roots are equal\n");
     printf("First root=%d\n",x);
     printf("Second root=%d\n",y);
    }
        else if (disc>0)
        {
             x=-b+sqrt(disc)/(2*a);
              y=-b-sqrt(disc)/(2*a);
    printf("Roots are real and distinct\n");
    printf("First root=%d\n",x);
    printf("Second root=%d\n",y);
        }
        else
        {
            rp=b*b/(2*a);
            ip=sqrt(fabs(disc)/(2*a));
            printf("Roots are complex\n");
     printf("First root=%d+i%d\n",x);
     printf("Second root=%d-i%d\n",y);

    }
}
