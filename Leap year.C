		//Program to check for the leap year
#include<stdio.h>
#include<conio.h>

	void main()
	{
		int year;
		clrscr();
		printf("Enter the year user!!");
		scanf("%d",&year);
		if(year%400==0)
		{
			printf("%d is the leap year\n",year);

		}
		else if(year%100==0)
		{
			printf("%d is not the leap year!\n",year);
		}
		else if(year%4==0)
		{
			printf("%d is leap year\n",year);
		}
		else
		{
			printf("%d is not a leap year!\n",year);
		}
		getch();


	}
