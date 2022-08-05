/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 *Kullanıcıdan bir sayı alıp ters üçgen çizen program.
 */


#include <stdio.h>

int main()
{
	int n;//Hangi sayıdan başlayarak üçgen oluşturacağını belirleyen bir n değişkeni atanır.
	
	printf("Sayı giriniz.");
	scanf("%d",&n);
	
	
	for(int x=1;x<=n;x++)//Satır sayısını tutan x değişkeniyle for döngüsü yaptım.
	{
		for(int z=n;z>x;z--)//Üçgenin sağa yatık olması için boşluğu düzenleyen, azalarak giden z tanımlayarak boşluktan oluşan bir üçgen yaratmış oldum.
		{
			printf(" ");
		}
		
		for(int y=1;y<=x;y++)//Arta arta giderek sayılarda üçgen oluşturması için y değişkeni atadım.
		{
			printf("%d",n-(x-y));//Her printf'e girdiğinde istediğimiz şekilde yazılması için böyle bir işlem yazdırdım. 
	    }
		
		printf("\n");//O satırdaki şlemler bitince alttaki satırdan devam etmesi için yani üçgen oluşturabilmek için \n kullandım.
		
	}
	
	return 0;
}

