#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{float ma=0,mom=0,ha,va,fy,fx,f[10],g[10],h[10],y[10],x[10],d[10],t[10],inmom=0;
int m,i,t1=5,t2=5;
char s[10],*s1="clockwise",*s2="anticlockwise";
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
// Moment
printf("enter the moment");
scanf("%f",&inmom);
printf("is it clockwise or anticlockwise?");
scanf("%s",s);
t1=strcmp(s1,s);
t2=strcmp(s2,s);
if(t2=0)
    inmom*=-1;
va=fy;
ha=fx;
 ma=mom+inmom;
 if(va<0)
	 va=-(va);
 if(ha<0)
	 ha=-(ha);
printf("\n The net vertical reaction is %0.3fkN",va);
printf("\n The net horizontal reaction is %0.3fkN",ha);
printf("\n The net moment on the cantilever beam is %0.3fkNm",ma);
return 0;}



