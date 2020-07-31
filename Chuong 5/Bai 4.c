#include<conio.h>
#include<stdio.h>
#include<windows.h>

int main()
{
	float a, b;
	char dau, lenh;
	do
	{
		system("cls"); //lenh xoa man hinh
		printf("Nhap vao phep tinh cong/tru/nhan/chia hai so (vi du 4+9 - viet lien)\n> ");
		scanf("%f",&a);
		scanf("%c", &dau);
		scanf("%f", &b);
		switch(dau)
		{
			case '+':
				printf("%f", a + b);
				break;
			case '-':
				printf("%f", a - b);
				break;
			case '*':
				printf("%f", a * b);
				break;
			case '/':
				if(b == 0)
					printf("Loi chia cho 0");
				else
					printf("%f", a / b);
				break;
			default:
				putch(dau);
				printf("Phep tinh khong hop le");
		}
		printf("\nNhan ESC de thoat, nhan phim bat ki de tiep tuc");
		lenh = getch();
	}while(lenh != 27);
}
