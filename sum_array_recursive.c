/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 *Bir dizinin toplamını recursive bulan bir fonksiyon.
 */


#include <stdio.h>
int toplam(int m);//Fonksiyonun prototipini yazdım.

int main()
{
	printf("%d",toplam(8));//toplam fonksiyonu çağırılır.
	return 0;	
}


int toplam(int m)		 
{
	
	int sayi[]={1,2,9,4,5,6,6,8};//Bir dizi oluşturdum elemanlarının toplama katılması için.
	
	if(m==0)//parantezin içi 0 olduğunda 0 çıkıcak sonuç. Çünkü bir eksilerek fonksiyon işlemi yapılıyor 0 1 eksilirse -1 olur, -1. terimli bir dzi olmadığına göre return 0 yapılır.
	return 0;
	
	else
	return sayi[m-1] + toplam(m-1);//m dizinin eleman sayısı olduğu için 1 eksiği terimle başlanır.Çünküü eleman sayısı olan terimi yoktur.
    //(m-1). terimi bulduktan sonra tekrar recursivele fonksiyon çağırılır ve bu toplam(0)a kadar gider.

}

	
