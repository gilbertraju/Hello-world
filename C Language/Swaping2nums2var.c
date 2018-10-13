#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter First Number:");
	scanf("%d",&a);

	
	printf("Enter Second Number:");
	scanf("%d",&b);
	
a=a+b;
b=a-b;
a=a-b;
	
	
	printf("The First number now is %d \nThe Second Number now is %d",a,b);	
	
	
	getch();
	
	
}
