//@ykslkrkci taraf�ndan Persona Non Grata i�in haz�rlanm��t�r.
#include<stdio.h>
//Aritmetik ��lemler
int main() {
/*
	x + y                   Toplama ��lemi
	x - y                   ��karma ��lemi
	x * y                   �arpma ��lemi
	x / y                   B�lme ��lemi
	x % y                   X'in Y'ye b�l�m�mden kalan� verir.
	-x                      X'i - ile �arpar. Say� + ise - olur. :P
*/
int c1 = 4;
int c2 = -2;
printf("%d \n",13*2);     //13*2nin sonucu int olaca�� i�in %d ile ekrana bast�rd�m.
printf("%f \n",5.4/2.6);  //��kt�m float olucakt� ve 5.4 ile 2.6 yi birbirine b�ld�m.
printf("%d \n",12/9);     //��kt�y� int istedi�imde ise virg�lden sonras�n� bana g�stermiyor.

printf("%d \n",c1+c2);    //Yaratt���m 2 farkl� de�i�kenlerin toplamlar�n� ekrana bast�rd�m.
printf("%d \n",-c1);      //c1 de�i�keninin de�erini - ile �arpt�.
	return 0;
}
