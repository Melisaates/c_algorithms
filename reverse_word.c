/*Melisa ATEŞ
 *atesmel12@gmail.com
 *19.12.2020 
 *Kelimeyi ters çeviren program.
 */


#include <stdio.h>
#include <stdlib.h>

char* ters_cevir(char* string)
{
	char* x=(char*)malloc(50*sizeof(char));//Yeni bir pointer için hafızadan yer alınır.

    int n=0;//Kelimenin boyutunu sayan değer atadım.
	while(*(string+n)!='\0')//Dizinin sonuna kadar sayması için while oluşturulur.
	{
		n++;
	}
	
	int j=0;//x dizisini kontrol eder.
	
	while(n-1>=0)//n-1 yazdım. Çünkü dizinin indexleri 0dan başlar.
	{
		*(x+j)=string[n-1];//x dizisinin başından başlayarak stringteki karakterleri sondan başlayarak x'e atadım.
		j++;
		n--;
	}
	return x;
}


int main()
{
	char m[]="melisa";
	char* t=ters_cevir(m);
	
	printf("%.7s",t);
	
	free (t);//Hafızadan alınan yer işlem sonunda serbest bırakılır.

	return 0;
}

