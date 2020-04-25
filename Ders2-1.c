//@ykslkrkci taraf�ndan Persona Non Grata i�in haz�rlanm��t�r.
#include<stdio.h>
//Veri Tipleri De�i�kenler �rnekler
int main() {
	int a1 = 42;
	char b1 = 66;                          //Say�ya e�itledik fakat ASCII tablosuna giderek 66'n�n kar��l���na bak�cak.
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.252;
	printf("%d %c %d %f %f %s",a1,b1,b2,c1,d1,"\tPersona Non Grata");
	/*                                       66 de�erinin ASCII tablosundaki karakter kar��l���n� bast�rd�k.
	                                         %d ile de B de�erinin ASCII tablosundaki say�sal de�erini bast�rd�k.
	*/
	//Ben e�er �u �ekilde yaparsam;
	printf("\n %.1f",c1);                  //c1 De�i�kenini bast�r�rken virg�nden sonra 1 tane hane almas�n� sa�lad�m.
	printf("\n %10d",a1);                  //�ncesinde 10 tane bo�luk b�rakmas�n� sa�lad�k.
	
	
	//Byte Hesaplama
	printf("\n%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));  // Ka� byte olduklar�n� ��rendik.
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(double));
	
	return 0;
}
