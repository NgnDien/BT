#include<conio.h>
#include<stdio.h>

int main()
{
	char chon;
	float a, b;
	while(1)
	{
		printf("1. a + b\n");
		printf("2. a - b\n");
		printf("3. a * b\n");
		printf("4. a / b\n");
		printf("0. Thoat\n");
		printf("> ");
		chon = getch();
		putch(chon);
		if(chon == '0')
		{
			return;
		}
		if(chon < '1' || chon > '4')
		{
			printf("\n");
			continue;
		}
		printf("\nNhap 2 so thuc: ");
		scanf("%f%f",&a,&b);
		switch(chon)
		{
			case '1':
				printf("%f + %f = %f", a, b, a+b);
				break;
			case '2':
				printf("%f - %f = %f", a, b, a-b);
				break;
			case '3':
				printf("%f * %f = %f", a, b, a*b);
				break;
			case '4':
				if(b == 0)
					printf("Loi chia 0");
				else
					printf("%f / %f = %f", a, b, a/b);
				break;
		}
		printf("\n\n");
	}
	
	
}
