#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {

	int dogumgun;
	int dogumay;
	int dogumyil;
	int tarihgun, tarihay, tarihyil;
	int sonucgun, sonucay, sonucyil;
	printf("Dogdunuz Tarihi (Yil Ay Gun)olarak giriniz:");
	scanf("%d %d %d", &dogumyil, &dogumay, &dogumgun);
	printf("Bugunun Tarihini (Yil Ay Gun)olarak giriniz:");
	scanf("%d %d %d", &tarihyil, &tarihay, &tarihgun);
	if (tarihgun<dogumgun) {
		tarihay--;
		tarihgun = tarihgun + 30;
		sonucgun = tarihgun - dogumgun;
	}
	else {
		sonucgun = tarihgun - dogumgun;
	}

	if (tarihay<dogumay) {
		tarihyil--;
		tarihay = tarihay + 12;
		sonucay = tarihay - dogumay;
	}
	else {
		sonucay = tarihay - dogumay;
	}
	sonucyil = tarihyil - dogumyil;
	printf("\n%dGUN %dAY %dYIL DIR YASIYORSUNUZ..\n\n", sonucgun, sonucay, sonucyil);
	printf("%d TOPLAM GUN\n\n", 365 * sonucyil + sonucay * 30 + sonucgun);
	printf("%d TOPLAM SAAT\n\n", (365 * sonucyil + sonucay * 30 + sonucgun) * 24);
	printf("%d TOPLAM DAKIKA\n\n", (365 * sonucyil + sonucay * 30 + sonucgun) * 24 * 60);
	printf("%d TOPLAM SANIYE\n\n", (365 * sonucyil + sonucay * 30 + sonucgun) * 24 * 60 * 60);
	printf("YENI YASINIZA %d GUN KALDI\n\n", 30 * sonucay + sonucgun);
	
	system("pause");

	return 0;
}