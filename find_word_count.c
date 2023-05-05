/*Melisa ATEŞ
 *atesmel12@gmail.com
 *22.12.2020 
 *Metin içinde istenilen kelime miktarını bulan program.
 */


#include <stdio.h>


int kelime_say(char* paragraf, char* kelime)
{
	int sayac=0;
	int s=0;
	
	while(kelime[s]!='\0')//kelime değişkeninin kaç karakterli olduğunu bulan while döngüsü oluşturdum.
	{
		s++;//Karakterleri s değişkeni sayar.
    }
    
    for(;*paragraf!='\0';paragraf++)//paragrafın sonuna kadar sayması için for döngüsü kullandım.
    {
		int n=0;
		int sayac1=0;
		for(;n<s;n++)//kelimenin boyutu kadar paragrafa bakar.
		{ 
			if(paragraf[n]==kelime[n])
			sayac1++;//kaç karakter eşit diye bakması için sayac1 arttırılır.
		}
		
		if(s==sayac1 && (paragraf[n]==' '||paragraf[n]=='.'||paragraf[n]==','))//Eğer aynı olan karakter sayısıyla kelimenin karakter sayısı eşit ise kelimemiz bulunmuş olur.
		//Sadece istenilen kelimeyi tutması için yanında ya noktalama işareti ya da boşluk olmalı dedim yani herhangi bir ek olmamalıdır.
		sayac++;//Bulunan kelime sayısını tutar.
	}
	
	return sayac;
 }

int main()
{
	char* p={"Melisa okula gitti sonra eve gelip markete gitti."};
	char* k={"gitti"};
	
	printf("%d",kelime_say(p,k));
	
	return 0;
}

