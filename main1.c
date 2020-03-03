#include <stdio.h>
#include <stdlib.h>

float udl(float ,float ,float );
float dis(float ,float );

int main()
{
    int n;
    float a1[10],a2[10],a3[10];
    printf("how many udll are there");
    scanf("%d",&n);
    printf("enter the load acting per meter in KN");
    for(int i=0;i<n;i++)
        scanf("%f",&a1[i]);
    printf("enter the distance from fixed end where load starts acting in meter");
    for(int i=0;i<n;i++)
            scanf("%f",&a2[i]);
    printf("enter the distance from fixed end where load ends acting in meter");
    for(int i=0;i<n;i++)
        scanf("%f",&a3[i]);

    for(int i=0;i<n;i++)
    {
        printf("udl for %d force",i+1);
        printf("\n the net load acting is %0.3fKN \n at a distance of %0.3sf meters from the fixed end ",udl(a1[i],a2[i],a3[i]),dis(a2[i],a3[i]));
    }

    return 1;
}

float udl (float u,float s,float e)
{
    float f;
    f=u*(e-s);
    return f;
}

float dis (float s,float e)
{
    float a;
    a=s+((e-s)/2);
    return a;
}
