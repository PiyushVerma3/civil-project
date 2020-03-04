#include<stdio.h>
#include<math.h>
int main()
{float ma=0,mom=0,ha,va,fy,fx,f[10],g[10],h[10],y[10],x[10],d[10],t[10];
int m,i;
 printf("\n Enter the no of point forces acting in kN");
 scanf("%d",&m);
for(i=1;i<=m;i++)
{printf("\nEnter the %d force",i);
scanf("%f",&f[i]);
printf("\n Enter the angle it makes with the x-axis in ACW");
scanf("%f",&g[i]);
h[i]=(3.14157/180)*g[i];
y[i]=(f[i]*sin(h[i]));
printf("\n Enter the distance between the the fixed end and the point where the force acts");
scanf("%f",&d[i]);
t[i]=y[i]*d[i];
mom=mom+t[i];
fy=fy+y[i];
x[i]=(f[i]*cos(h[i]));
fx=fx+x[i];}
va=fy;
ha=fx;
 ma=mom;
 if(va<0)
	 va=-(va);
 if(ha<0)
	 ha=-(ha);
printf("\n The net vertical reaction is %0.3fkN",va);
printf("\n The net horizontal reaction is %0.3fkN",ha);
printf("\n The net moment on the cantilever beam is %0.3fkNm",ma);
return 0;}



