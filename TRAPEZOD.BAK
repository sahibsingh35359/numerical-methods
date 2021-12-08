#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
return(1/(1+x*x));
}
void main()
{
float a,b,n,h,sum1=0,sum,y0,yn;
int i;
clrscr();
printf("\nEnter the upper limit : ");
scanf("%f",&b);
printf("\nEnter the lower limit : ");
scanf("%f",&a);
printf("\nEnter the number of intervals : ");
scanf("%f",&n);
h=(b-a)/n;
y0=f(a+0*h);
yn=f(a+n*h);
for(i=1;i<n;i++)
sum1=sum1+f(a+i*h);
sum = (h/2)*(y0 + yn + 2*sum1);
printf("Answer : %0.2f",sum);
getch();
}