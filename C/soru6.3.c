/*Melisa ATEŞ
 *atesmel12@gmail.com
 *22.12.2020 
 *Bir recursive fonksiyon ile kelimenin tersten ve baştan okunuşu aynı ise 1 değil ise 0 dönen
 fonksiyon.
 */


#include <stdio.h>

int tersi_ile_ayni_mi(char* x,int n,int i)
{
	if(n-2>0)//İndislerin 0'dan küçük olmaması için if yazdım.
	{
		if(x[i]==x[n-2])//Dizinin ilk elemanıyla son elemanı karşılaştırılır. n-2 yazmamın sebebi \0ı çıkarmak ve indislerin 0'dan başlaması.
		return tersi_ile_ayni_mi(x,n-1,i+1);//Dıştan içe doğru bakan recursive fonksiyon oluşturdum.
	    
		else
		return 0;//Eşitlik yoksa 0 dönmesini sağladım.
	}
	
	return 1;//Eğer şartı sağlıyorsa 1 dönmeli.
}


int main()
{
	char m[20];
    printf("kelime giriniz\n");
    scanf("%20s",m);
    
    int a=0;
    while(m[a]!='\0')
    a++;
    
    printf("%d",tersi_ile_ayni_mi(m,a+1,0));//kelimeyi, eleman sayısını ve ilk elemanının indisini fonksiyona gönderdim.
    return 0;
}

