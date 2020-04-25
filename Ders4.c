//@ykslkrkci tarafýndan Persona Non Grata için hazýrlanmýþtýr.
// Aritmetik Ýþlemler
#include<stdio.h>
int main() {
	/*
	x + y / z , (x / y) * 6 ,  gibi ifadeler birer aritmetik ifadelerdir.
	Ýþlem Öncelikleri Matematikte gördüðümüz gibi iþlemektedir.
	Parantez iþlemleri her zaman ilk yapýlýr.
	Ýþlemler kendi aralarýnda solda saða olarak iþlem görürler.
	Kendi aralarýnda soldan saða (*, /, %)
	Kendi aralarýnda soldan saða (+, -)
	*/
	
	printf("%d\n",2-3+4);
	printf("%d\n",2*3-4);
	printf("%d\n",2-3/4);    //Çýktýlarý inceliyerek iþlem önceliðini pekiþtirmelisiniz.
	printf("%d\n",2+3%4);
	printf("%d\n",2/3*4);
	printf("%d\n",2%3/4);
	printf("%d\n",-2+3);
	
	
	return 0;
}
