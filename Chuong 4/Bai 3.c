#include<conio.h>
#include<stdio.h>
int main()
{
	int a, b;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	//su dung phep xor de doi cho 2 gia tri theo cong thuc sau:
	a^=b^=a^=b; //hay a=(b^=a^=b)^a
	printf("Ket qua sau khi doi gia tri:\n\ta = %d\n\tb = %d", a, b);
	getch();
}

//luu y, cac phep toan tren bit chi ap dung voi so nguyen

//cung co the su dung cac cach khac nhu goi them 1 bien tam tmp: tmp = a; a = b; b = tmp;
