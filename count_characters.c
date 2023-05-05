/*Melisa ATEŞ
 *atesmel12@gmail.com
 *19.12.2020 
 *Bir karakter_say isimli fonksiyon yazan program.
 */


#include <stdio.h>
#include<ctype.h>

int karakter_say(char* string, char* ch)
{
	
	int n=0;//İstediğimiz harfle metindeki harflerin kaç kez eşit olduğunu sayar.
	
	while(*string !='\0')//Dizinin sonuna gelince işlemi durdurmak için böyle bir while döngüsü oluşturulur.
	{
		if(tolower(*string)==tolower(*ch))//Eğer eşit ise sayac olan n değeri 1 arttırılır.
	    {
			
			n++;	
	    }
	    
	    string++;//Teker teker dizideki harflere bakmamızı sağlar.
    }
    
   
    
    return n;
}

int main()
{
	char* ad="ali Eve gel lütfen";
	 
	char* harf="e";
	
	printf("%d",karakter_say(ad,harf));//Adresler fonksyona gönderilir.
	
	return 0;
}

