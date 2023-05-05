/*Melisa ATEŞ
 *28.12.2020
 *atesmel12@gmail.com
 *Dosyadakileri diğer dosyanın içeriğine ekleyip dosyayı silen kod.  
 */


#include <stdio.h>

int main()
{
	FILE *f1,*f2;//İKİ tane dosya tanımladık
	f1=fopen("dosya1.txt","a");//dosya1'i f1'e atadım ve dosya1'in altına ekleme yapılması için a kullandım.
	
	if(f1==NULL)//Dosya da hata varsa 1 dödürücek.
	return 1;
	
	
	f2=fopen("dosya2.txt","r");
	if(f2==NULL)//Dosya da hata varsa 1 dödürücek.
	{
		fclose(f1);//f1'i de kapatarak 1 dönsün dedim.
		return 1;
	}
	
	
	char m[75];//Dizi tanımladım dosay2'dekileri buraya kopyalasın diye.
	while(fgets(m,75,f2)!=NULL)//Satır satır f2'yi okuyacak sonuna kadar.
	fputs(m,f1);//m dizisini f1'e yazıcak ama sonuna eklicek a kullandığımız için.
	
	//İşimiz bitince f1 ve f2'yi kapattım.
	fclose(f1);
	fclose(f2);
	
	//dosya2'i silmak için fonksiyon kullanılır en sonda.
	if(remove("dosya2.txt")==0)
	printf("Deleted successfully");
	else
	printf("Unable to delete the file");
	
	
	return 0;
}

