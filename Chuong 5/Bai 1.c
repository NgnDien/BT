#include<stdio.h>
#include<conio.h>
int main()
{
	batDau:
	printf("Nhap vao nam: ");
	int nam;
	scanf("%d",&nam);
	if(nam < 1 || nam > 9999)
	{
		printf("Chi xet nhung nam tu 1 den 9999\n");
		goto batDau;
	}
	//Thien Can
	switch(nam % 10)
	{
		case 0:
			printf("Canh");
			break;
		case 1:
			printf("Tan");
			break;
		case 2:
			printf("Nham");
			break;
		case 3:
			printf("Quy");
			break;
		case 4:
			printf("Giap");
			break;
		case 5:
			printf("At");
			break;
		case 6:
			printf("Binh");
			break;
		case 7:
			printf("Dinh");
			break;
		case 8:
			printf("Mau");
			break;
		default:
			printf("Ky");
			break;
	}
	//Dia Chi
	switch(nam % 12)
	{
		case 0:
			printf(" Than");
			break;
		case 1:
			printf(" Dau");
			break;
		case 2:
			printf(" Tuat");
			break;
		case 3:
			printf(" Hoi");
			break;
		case 4:
			printf(" Ti (chuot)");
			break;
		case 5:
			printf(" Suu");
			break;
		case 6:
			printf(" Dan");
			break;
		case 7:
			printf(" Mao");
			break;
		case 8:
			printf(" Thin");
			break;
		case 9:
			printf(" Ty");
			break;
		case 10:
			printf(" Ngo");
			break;
		default:
			printf(" Mui");
			break;
	}
	getch();
	return 0;
}
