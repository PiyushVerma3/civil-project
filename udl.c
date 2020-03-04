#include<stdio.h>
int main()
{float f,u,s,e,a;
printf("\n Enter the load acting per metre in kN");
scanf("%f",&u);
printf("\n Enter the distance from fixed end where load starts acting in metres");
scanf("%f",&s);
printf("\n Enter the distance from fixed end where load stops acting in metres");
scanf("%f",&e);
f=u*(e-s);
a=s+((e-s)/2);
printf("\n the net load acting is %0.3fkN\n at a distance of %0.3fmetres from the fixed end",f,a);
return 0;}