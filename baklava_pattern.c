/*Melisa ATEŞ
 *atesmel12@gmail.com
 *04.11.2020
 *Baklava şeklinde desen çıkaran program.
 */


#include <stdio.h>

int main()
{  
  int n;
  printf("n sayısını giriniz\n");
  scanf("%d",&n);//n sayısıyla kontol edilicek döngü.
	
	
	
  for(int x=1;x<=n/2+1;x=x+1)//Birinci ana for döngüsüyle baklava deseninin yarısı yapılır.
  {  
	  for(int z=(n-1)/2;z>=x;z--)//z'yi (n-1)/2'den başlatarak yıldızlı desenlerin sadece 1/4'i oluşturulur.
	  printf("*");
     
    
	  for(int y=1;y<=2*x-1;y=y+1)//Tek sayı miktarında desen çıkarabilmek için 2*x-1 yazılır.
	  {
	     if(x<=(n+1)/2)//Baklava deseninin sadece yarısını yapmak amacıyla if le sınırlandırılır.
	     printf("+");
      }
	   
	  for(int z=(n-1)/2;z>=x;z--)
	  printf("*");
     
      
      printf("\n");
  } 
     
    
  for(int x=1;x<=n;x=x+1)//İkinci ana for dögüsüyle 1.döngünün tersi şeklinde desen çıkarılması beklenir.
  {
      for(int a=1;a<=x;a++)
	  {
		 if(x<=(n-1)/2)
	     printf("*");
      }
	  
	  
	  for(int y=n-2;y>=2*x-1;y=y-1)//Desenin bozulmaması için y'yi n-2den başlatarak azaltılır.
	  printf("+");
  
	  
	  for(int a=1;a<=x;a++)
	  {
		if(x<=(n-1)/2)//Desenin bütününü yazmamak için n-1/2den küçük ise * yazdırılır.
	    printf("*");
      }
	  
	  printf("\n");
	  
  }
	
	
	
  return 0;
}

