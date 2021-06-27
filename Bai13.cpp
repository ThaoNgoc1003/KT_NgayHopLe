#include <conio.h>
#include <stdio.h>
void main()
{
	int d,m,y;
	int max;
	printf("Nhap ngay: ");
	scanf("%d",&d);
	printf("Nhap thang: ");
	scanf("%d",&m);
	printf("Nhap nam: ");
	scanf("%d",&y);
	if(y>0)
	{
		if(m == 1 || m ==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			max=31;
			if(d>0 && d<=max)
				printf("%d-%d-%d la ngay hop le",d,m,y);
			else
			printf("%d-%d-%d la ngay khong hop le",d,m,y);
		}
		else if(m == 4 || m ==6 || m==9 || m==11)
		{
			max=30;
			if(d>0 && d<=max)
				printf("%d-%d-%d la ngay hop le",d,m,y);
			else
			printf("%d-%d-%d la ngay khong hop le",d,m,y);
		}
		else if((m==2 && y%4 == 0 && y%100 !=0) ||( m==2 && y%400 == 0 ))
		{
			max=29;
			if(d>0 && d<=max)
				printf("%d-%d-%d la ngay hop le",d,m,y);
			else
			printf("%d-%d-%d la ngay khong hop le",d,m,y);
		}
		else if(m==2  )
		{
			max=28;
			if(d>0 && d<=max)
				printf("%d-%d-%d la ngay hop le",d,m,y);
			else
				printf("%d-%d-%d la ngay khong hop le",d,m,y);
		}
		else
			printf("%d-%d-%d la ngay khong hop le",d,m,y);
	}
	else
		printf("%d-%d-%d la ngay khong hop le",d,m,y);
	getch();
}