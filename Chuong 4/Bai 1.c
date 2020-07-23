#include<conio.h>
#include<stdio.h>
int main()
{
	float diem, tong;
	printf("Nhap vao diem Toan: ");
	scanf("%f", &tong);
	printf("Nhap vao diem Ngu van: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Nhap vao diem Tieng Anh: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Nhap vao diem Vat ly: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Nhap vao diem Hoa hoc: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Nhap vao diem Lich su: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Nhap vao diem Dia ly: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Nhap vao diem Giao duc Cong dan: ");
	scanf("%f", &diem);
	tong+=diem;
	printf("Diem trung binh la %.2f", tong/8);
	getch();
}
