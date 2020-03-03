#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a1[10],a2[10],a3[10],ah[10],av[10],t1=0,t2=0,hrf=0,vrf=0;
    int n1,n2;
    printf("enter the number of forces");
    scanf("%d",&n1);
    printf("enter the values and angle forces makes with x AXIS");
    for(int i = 0;i < n1;i++)
    {
        scanf("%f",&a1[i]);
        scanf("%f",&a2[i]);
    }

    for(int i=0;i<n1;i++)
    {
        a3[i]=(3.14157/180)*a2[i];
    }
    for(int i=0;i<n1;i++)
    {
        if(a2[i]>=0 || a2[i]<=90)
        {
            ah[i]=1;
            av[i]=1;

        }
        else if(a2[i]>90 || a2[i] <=180)
        {

            ah[i]=-1;
            av[i]=1;
        }
        else if(a2[i]>180 || a2[i] <=270)
        {
            ah[i]=-1;
            av[i]=-1;
        }
        else if(a2[i]>270 || a2[i] <=360)
        {
            ah[i]=1;
            av[i]=-1;
        }


    }

        for(int i=0;i<n1;i++)
        {
            t1=a1[i]*sin(a3[i])*av[i];
            vrf=t1+vrf;
            t2=a1[i]*cos(a3[i])*ah[i];
            hrf=t2+hrf;
        }

        printf("horizontal force = %0.3f\n",hrf);
        printf("vertical force = %0.3f",vrf);

    return 0;
}
