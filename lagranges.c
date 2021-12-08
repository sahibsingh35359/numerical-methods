#include<stdio.h>
#include<conio.h>
void main()
{
	 float x[100], y[100], xvalue, sum=0, p;
	 int i,j,n;
	 clrscr();
	 printf("\nEnter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xvalue);
	 for(i=1;i<=n;i++)
	 {
		  p=1;
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
				p = p* (xvalue - x[j])/(x[i] - x[j]);
			   }
		  }
		  sum = sum + p * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xvalue, sum);
	 getch();
}