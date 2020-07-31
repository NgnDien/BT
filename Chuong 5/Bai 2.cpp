#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a, b;
	bool khongCoSo = true;// mac dinh la khong co so nguyen to nao.
	bool soNgTo;
	int sqrtI = 0;
	printf("Nhap vao lan luot 2 so a, b (a < b): ");
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		printf("a phai khong lon hon b");
		goto thoat;
	}

	for(int i = a; i <= b; i++) //xet tung so i trong doan [a; b];
	{
		//voi  moi so i se tien hanh kiem tra do co phai so nguyen to hay khong
		if(i < 2)
		{
			//i khong la so nguyen to, chuyen toi so tiep theo
			continue;
		}
		if(i < 4)
		{
			//i la so nguyen to, in ra man hinh, danh dau la da co so nguyen to;
			soNgTo = true;
			goto timDuocSoNto;
		}
		if(i % 2 == 0)
		{
			continue;
		}
		sqrtI = sqrt(i);
		soNgTo = true;
		for(int j = 3; j <= sqrtI; j+=2) 
		{
			if(i % j == 0) //khong phai so nguyen to
			{
				soNgTo = false;
				break;
			}
		}
		//chay duoc den day chung to la i khong chia het cho so nguyen nao tu 2 cho den sqrt(i)
	timDuocSoNto:
		if(soNgTo)
		{
			printf("%d; ", i);
			khongCoSo = false;
		}
	}
	if(khongCoSo)
	{
		printf("Khong co so nguyen to nao trong doan [%d; %d]", a, b);
	}
	
	
	thoat:
		getch();
		return 0;
}
