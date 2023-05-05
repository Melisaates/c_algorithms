/*Melisa ATEŞ
 *atesmel12@gmail.com
 *03.11.2020
 *Yazılan sayıyı ters çeviren program.  
 */


#include <stdio.h>

int main()
{
	int sayi,rakam;//rakam değişkenini tanımlayarak sayıların modunun alınmasıyla rakamları yazdırılır.
	
	printf("Bir sayı giriniz:");
	scanf("%d",&sayi);
	
	printf("\nSayının tersten yazılışı:");
	
	
	while(sayi>0)
	{
	  rakam=sayi%10;//Birler basamağından başlayarak sola doğru rakamları buldurmak için mod kullanılır.
	  printf("%d",rakam);
	  sayi=sayi/10;//Sayı 10a bölünerek diğer rakamlarına bakılması için olanak sağlanır.
	}
	
	
	
	
    return 0;
}

