/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 *Bİr diziyi tersine çeviren bir recursive fonksiyonla program yazma.
 */


#include <stdio.h>

void ters(int m)//Bir şey return etmesini istemediğim için, sadece yazdırılması için void kullandım.
{
	int sayi[]={1,15,8,4};//4 elemanlı bir dizi oluşturdum.
	
	if(m>0)//0'dan büyük olmalı çünkü 1 eksiği olan terimi buluyoruz.0 olursa -1. terimi istemiş olucaz o da mümkün değil.
	{
		printf("%d,",sayi[m-1]);//Sondaki terim yazırılır.
		ters(m-1);//recursive ile tekrar fonksiyon çağırılır. Bu işlem ters(0) oluncaya kadar devam eder.
		
	}
}

int main()
{
	
	ters(4);//Fonksiyon çağırılır.
	
	return 0;	
}
