		//Program to implement swapping of 2 nos using 3rd variable
#include<stdio.h>
#include<conio.h>

	void main()
	{
		int a,b;
		clrscr();
		printf("Enter a First Number\n");
		scanf("%d",&a);
		printf("Enter a Second Number\n");
		scanf("%d",&b);
		printf("Before Swapping\n The values of a is=[%d] and b are [%d]\n",a,b);
		a=a+b;
		b=a-b;
		a=a-b;
		printf("After Swapping\nThe value of a is [%d] and b is [%d] \n",a,b);
		getch();
	}

