#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,x,e,f(float);
	clrscr();
	printf("\nEnter the initial value :   ");
	scanf("%f %f",&a,&b);
	printf("\nEnter the prescribed tolerance : ");
	scanf("%f",&e);
	if((f(a)*f(b)>0))
	{
		printf("\nNot suitable guess value");
		exit();
	}
	do
	{
		x=((a*f(b))-(b*f(a)))/(f(b)-f(a));
		if(f(x)==0)
		{
			printf("\nRoot is %f",x);
			getche();
			exit();
		}
		if(f(a)*f(x)>0)
		a=x;
		else
		b=x;
	}
	while(fabs(a-b)>e);
	printf("\nApproximation to root is %f",x);
	getche();
}
       float f (float x)
       {
       return(x*x*x-2*x-5);
       }



