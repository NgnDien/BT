#include<conio.h>
#include<stdio.h>
int main()
{
	int so, min, max;
	printf("Nhap vao 5 so nguyen trong doan [-32767; 32767]: ");
	//doc so thu nhat, mac dinh cho no la max va min
	scanf("%d", &min);
	max = min;
	//doc so thu hai, kiem tra neu lon hon max thi cho lam max, nho hon min thi cho lam min
	scanf("%d", &so);
	max = so>max ? so : max;
	min = so<min ? so : min;
	//doc so thu ba, kiem tra neu lon hon max thi cho lam max, nho hon min thi cho lam min
	scanf("%d", &so);
	max = so>max ? so : max;
	min = so<min ? so : min;
	//doc so thu tu, kiem tra neu lon hon max thi cho lam max, nho hon min thi cho lam min
	scanf("%d", &so);
	max = so>max ? so : max;
	min = so<min ? so : min;
	//doc so thu nam, kiem tra neu lon hon max thi cho lam max, nho hon min thi cho lam min
	scanf("%d", &so);
	max = so>max ? so : max;
	min = so<min ? so : min;
	printf("So lon nhat la: %d\n", max);
	printf("So nho nhat la: %d", min);
	getch();
}
