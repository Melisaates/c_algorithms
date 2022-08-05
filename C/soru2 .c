/*Melisa ATEŞ
 *atesmel12@gmail.com
 *100le 400 arasındaki tam sayılardan rakamları çift olanları bulan program yazınız.
 *29.10.2020
 */


#include <stdio.h>

 int main()
 {
    int n=102,sayac=0;//Bir sayaç tanımlayarak her bulunan sayı miktara eklenir ve kaç tane rakam bulunduğu hesaplanır.
  
    while(100<n && n<=400)
    {
	   if(n/10%2==0 && n/100%2==0)//Sayının modu alınarak her rakamı kontrol edilir ve 2'ye bölünür kalanı sıfır çıktığında rakamların çift olduğu anlaşılır. 
	   {
        printf("%d,",n);
	    sayac++;//İstenilen sayı bulunduğunda miktarın hesabını tutan sayac değişkenine 1 eklenir.
       }
	
    n=n+2;//Sayı iki arttırılır her seferinde çünkü amaç çiftleri bulmaktır.
    }
  
    printf("\nTüm basamakları çift %d sayi vardır\n",sayac);
	  
	  
	  
    return 0;
 }


