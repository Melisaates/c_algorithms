/*Melisa ATEŞ
 *22.12.2020
 *atesmel12@gmail.com
 *İki kelimeyi birleştiren program.
 */



#include <stdio.h>
#include <stdlib.h>



char * string_birlestir(char *str1, char * str2)
{
	int n=0,m=0;//iki kelimenin boyutunu tutması için diki değişken atadım.
	while(str1[n]!='\0')//ilk kelimenin sonuna kadar sayması için while oluşturulur.
	n++;
	
	while(str2[m]!='\0')//ikinci kelimenin sonuna kadar sayması için while oluşturulur.
	m++;
	
	char* str3=(char*)malloc((n+m)*sizeof(char));//Birleştirilmiş metin için yeni bir pointer oluşturulur.
    int j=0;
	
	for(int b=0;str1[b]!='\0';b++)
	{
		*(str3+j)=str1[b];//ilk kelimenin ataması yeni oluşturulan str3 dizisinin başından başlanılarak atama yapılır.
	    j++;
	}
		
	for(int a=0;a<m;a++)
	{
		*(str3+n)=str2[a];//str3 dizisini ilk kelimenin boyutundan başlatılarak ikinci kelimenin ataması yapılır.
		n++;
	}
		
	return str3;

}


int main()
{
	
	char x[]="melisa";
	char y[]="ates";
	char* z=string_birlestir(x,y);
	
	printf("%s",z);
	
	free(z);;//Hafızadan alınan yer işlem sonunda serbest bırakılır.
	
	return 0;
}

