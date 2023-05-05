/*Melisa ATEŞ
 *22.12.2020
 *atesmel12@gmail.com
 *Bir metindeki istenilen kelimeyi bulup yeni kelimeyle değiştiren program.
 */

#include <stdio.h>
#include <stdlib.h>



char* kelime_say(char* paragraf,char*aranankelime, char*yenikelime)
{
	char* yeni=(char*) malloc(100*sizeof(char));
	
	int s=0,x=0;
	int a=0;
	while(yenikelime[a]!='\0')
	a++;

	while(aranankelime[s]!='\0')//kelime değişkeninin kaç karakterli olduğunu bulan while döngüsü oluşturdum.
	{
		s++;//Karakterleri s değişkeni sayar.
    }
   
    
    for(;*paragraf!='\0';paragraf++)//paragrafın sonuna kadar sayması için for döngüsü kullandım.
    {
		int sayac1=0;
		
		for(int n=0;n<s;n++)//kelimenin boyutu kadar paragrafa bakar.
		{ 
			if(paragraf[n]==aranankelime[n])
			sayac1++;//kaç karakter eşit diye bakması için sayac1 arttırılır.
		}
		
		if(s==sayac1)//Eğer aynı olan karakter sayısıyla kelimenin karakter sayısı eşit ise kelimemiz bulunmuş olur.
		{
			for(int i=0 ;i<a;i++)
			{
				yeni[x]=yenikelime[i]; //diziye yeni kelime atanır.
	             x++;
			}
			for(int j=1;j<s;j++) 
			paragraf++;//aranan kelime kadar arttırılır paragraf.
	    }
		
		else
		{
		    yeni[x]=*paragraf;//eğer kelime bulunamadıysa paragraf diziye atanır.
		    x++;
		}
	}
	
	return yeni;
 }


int main()
{
	char* p={"Melisa okula gitti."};
	char* r={"okula"};
	char* s={"eve"} ;
	char* w=kelime_say(p,r,s);
	
	printf("%s",w);
	free(w);
	
	return 0;
}
