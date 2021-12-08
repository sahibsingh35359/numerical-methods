#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return 1/(1+x*x);
}
void main()
{
	int n;
	float i,a,b,sum=0,h;
	int position_of_term=1;
	clrscr();
	printf("\nEnter Value of a and b :\n");
	scanf("%f%f",&a,&b);
	printf("\nEnter number of Intervals :\n");
	scanf("%d",&n);
	h=(b-a)/n;
	sum = f(a) +f(b);
	for(i=a+h;i<b;i=i+h)
	{
		if(position_of_term %3 ==0)
		sum = sum + 2*f(i);
		else
		sum = sum + 3*f(i);
		position_of_term++;
	}
	sum = (3*h * sum)/8;
	printf("\nValue of The integral = %f",sum);
	getch();
}





