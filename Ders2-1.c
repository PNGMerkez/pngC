//@ykslkrkci tarafýndan Persona Non Grata için hazýrlanmýþtýr.
#include<stdio.h>
//Veri Tipleri Deðiþkenler Örnekler
int main() {
	int a1 = 42;
	char b1 = 66;                          //Sayýya eþitledik fakat ASCII tablosuna giderek 66'nýn karþýlýðýna bakýcak.
	char b2 = 'B';
	float c1 = 4.2;
	double d1 = 0.252;
	printf("%d %c %d %f %f %s",a1,b1,b2,c1,d1,"\tPersona Non Grata");
	/*                                       66 deðerinin ASCII tablosundaki karakter karþýlýðýný bastýrdýk.
	                                         %d ile de B deðerinin ASCII tablosundaki sayýsal deðerini bastýrdýk.
	*/
	//Ben eðer þu þekilde yaparsam;
	printf("\n %.1f",c1);                  //c1 Deðiþkenini bastýrýrken virgünden sonra 1 tane hane almasýný saðladým.
	printf("\n %10d",a1);                  //Öncesinde 10 tane boþluk býrakmasýný saðladýk.
	
	
	//Byte Hesaplama
	printf("\n%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));  // Kaç byte olduklarýný öðrendik.
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(double));
	
	return 0;
}
