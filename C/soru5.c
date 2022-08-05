/*Melisa ATEŞ
 *atesmel12@gmail.com
 *26/10/2020
 *1'den n'e kadar olan sayıların 1 bölü şeklindeki toplamlarını bulan program.
*/


#include <stdio.h>

 int main()
 {
  
   int n,sayac=1;
   float toplam=0;//toplam değişkenini float tanımlanarak sonucun virgüllü çıkması sağlanır.
  
   printf("Terim sayısını giriniz: \n");
   scanf("%d",&n);
	
   
   while(sayac<=n)
   { 
     toplam=(float)1/sayac+toplam;//float yazarak toplama virgüllü eklenmesi sağlanır.
   
     printf("1/%d+",sayac);//sayac değişkeni tanımayarak sayıları hafızada tutup çıktı da gözükmesini sağlar.
     
     sayac++;
   }
   
   
   printf("\nSerinin toplamı:%.5f",toplam);//%.5f denilmesinin sebebi virgülden sonra 5 basamak bulundurarak yuvarlanması sağlanır.
 
   return 0;
}

