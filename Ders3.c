//@ykslkrkci tarafýndan Persona Non Grata için hazýrlanmýþtýr.
#include<stdio.h>
//Aritmetik Ýþlemler
int main() {
/*
	x + y                   Toplama Ýþlemi
	x - y                   Çýkarma Ýþlemi
	x * y                   Çarpma Ýþlemi
	x / y                   Bölme Ýþlemi
	x % y                   X'in Y'ye bölümümden kalaný verir.
	-x                      X'i - ile çarpar. Sayý + ise - olur. :P
*/
int c1 = 4;
int c2 = -2;
printf("%d \n",13*2);     //13*2nin sonucu int olacaðý için %d ile ekrana bastýrdým.
printf("%f \n",5.4/2.6);  //Çýktým float olucaktý ve 5.4 ile 2.6 yi birbirine böldüm.
printf("%d \n",12/9);     //Çýktýyý int istediðimde ise virgülden sonrasýný bana göstermiyor.

printf("%d \n",c1+c2);    //Yarattýðým 2 farklý deðiþkenlerin toplamlarýný ekrana bastýrdým.
printf("%d \n",-c1);      //c1 deðiþkeninin deðerini - ile çarptý.
	return 0;
}
