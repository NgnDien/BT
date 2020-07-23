#include<conio.h>
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("nhap vao 3 so nguyen: ");
	scanf("%d%d%d", &a, &b, &c);
	//kiem tra neu a > b thi doi cho a va b
	a = a>b ? (b^=a^=b)^a : a;
	//kiem tra neu b > c thi doi cho b va c
	b = b>c ? (c^=b^=c)^b : b;
	//nhu vay c da mang gia tri lon nhat, a và b co the da thay doi gia tri, can kiem tra lai
	a = a>b ? (b^=a^=b)^a : a;
	// den day, gia tri lon thu hai da gan cho b, a nghiem nhien mang gia tri nhom nhat
	printf("Ket qua sau khi sap xep tang dan la: %d; %d; %d", a, b, c);
	getch();
}

//day doi la sap xep noi bot - bubble sorting
