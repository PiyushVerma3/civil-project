#include<stdio.h>
int main()
{float f1,f2,s,e,a,b,f,g;
printf("\n Enter the first load per metre in kN");
scanf("%f",&f1);
printf("\nEnter the end load per metre in kN");
scanf("%f",&f2);
printf("\nEnter the starting point in metres");
scanf("%f",&s);
printf("\n Enter the end point in metres"); 
scanf("%f",&e);
if(f1>f2)
{f=f2*(e-s);
g=((f1-f2)/2)*(e-s);
a=s+((e-s)/2);
b=s+((e-s)/3);}
else
{f=f1*(e-s);
g=((f2-f1)/2)*(e-s);
a=s+((e-s)/2);
b=s+((e-s)*0.6667);}
printf("\n The first force %0.3fkN acts at a distance of %0.3f metres from the fixed end",f,a);
printf("\n The second force %0.3fkN acts at a distance of %0.3f metres from the fixed end",g,b);
return 0;}