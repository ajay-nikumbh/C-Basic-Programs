		//Program to print all odd numbers upto the given limit
#include<stdio.h>
#include<conio.h>

	void main()
	{
		int i,n;
		clrscr();
		printf("Enter a number");
		scanf("%d",&n);
		for(i=0;i<=n;i++)
		{
			if(i%2==1)
				printf("%d\t",i);

			else
				continue;
		}
		getch();
	}
