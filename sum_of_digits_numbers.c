/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 *Bir sayının basamakları oluşturan sayıların toplamını bulan bir fonsiyon yazınız.
 */


#include <stdio.h>

int topla(int m)//Topla fonksiyonuyla sayının rakamları toplamını bulan bir fonksiyon oluşturduk.
{
	if(m==0)//m en son 10'a bölündüğünde 0 oluyorsa artık tüm basamakları bulduk demektir.Bu yüzden return 0 dedim.
	return 0;
	
	else//m 0 değilse işlemin hala devam edilebilir olduğunu gösterir.
	return (m%10)+topla(m/10);//mod10'unu bularak rakam bulunur diğer rakamlara bakmak için recursive ile topla fonksiyonu çağırılıp bu sefer 10 bölümündeki rakama bakılır.
	
	
}

int main()
{
	int n;//istenilen sayıyı kullanıcıdan istedim.
	printf("Bir sayı giriniz");
	scanf("%d",&n);
	
	printf("Rakamları toplamı:%d",topla(n));//Fonksiyonu çağırarak, yazdırdım.
	
	return 0;
}
