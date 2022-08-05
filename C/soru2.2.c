/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 *Bir dizideki en büyük 2. Sayıyı ve dizideki elemanların ortalamasını ve standart sapmasını
bulan bir C programı.
 */


#include <stdio.h>
#include <math.h>


int main()
{
	float a[5];
	for(int i=0;i<5;i++)//Dizinin terimlerini kullanıcının girmesini sağlamak amacıyla for döngüsü kullandım.
    {
		printf("%d. sayıyı giriniz:",i+1);//i+1 denilmesinin sebebi terim sayısı kaçıncı sayıysa bir eksiği oluyor.
		scanf("%f",&a[i]);
    }
	
	
	
	for(int b=0;b<2;b++)//2.en büyük sayı istenildiği için iki kez dönen bir for döngüsü kullandım.
	{
		int max=b;//max'a b'yi atayarak tarayacağı diğer elemanlarla karşılaştırılması sağlanır. 
		int tut=a[b];//tut değişkeniyle a[b] elemanının saklanılmasını istedim.
		
		for(int n=b;n<5;n++)//İndisleri gösteren n değişkeni atadım ve for döngüsüyle max indsli elemanla diğer elemanları karşılaştırılarak max bulunmasını sağladım.
		{
			if (a[n]>=a[max])//a[n] eşit veya büyükse a[max]'tan o zaman max n'e eşit olur.
			max=n;
		}
		
		a[b]=a[max];//a[b]'yle a[max]'ın yerleri değiştirilir tut değişkeni ile.
		a[max]=tut;
	}
	
	printf("EN BÜYÜK İKİNCİ SAYI:%0.f\n",a[1]);
	
	
	
	float toplam=0;//0'dan başlatılarak diğer elemanlar toplama katılır.
	
	for(int n=0;n<5;n++)//Tüm elemanların katılması için indisi arttıran for döngüsü kullandım.
	{
		toplam+=a[n];//Her gelen sayı bir önceki toplama katılarak tüm elemanların toplamı bulunur.
	}
	
	float ortlm=toplam/5;//Sayıların otalaması hesaplanır. 
	printf("ORTALAMA:%.2f\n",ortlm);
	
	//standart sapma=karekök((ortalama-1.sayı)karesi+(ortalama-2.sayı)karesi+(ortalama-3.sayı)karesi...)/(terim sayısı-1)
	float fun(int a,int b)//Standart sapmada kullanılacak işlemin bir kısmını bu fonksiyonu çağırarak yapılır ve işlem kolaylığı sağlanmış olunur.
	{
		float f=pow((ortlm-a),b);//Ortalamadan çıkarılan terimin karesinin alınması için kullanılır.
		return f;
	}
	
	
	int tpl=0;
	
	for(int m=0;m<5;m++)//Tüm elemanları toplama katmak için bu döngüyü oluşturdum.
	{
		tpl+=fun(a[m],2);//fun fonksiyonu çağırılır.
	}
	
	float spm=sqrt(tpl/4);//Terim sayısının 1 eksiğine bölünür ve kare kökü alınır.
	printf("STANDART SAPMA:%.2f",spm);


	
	return 0;
}


