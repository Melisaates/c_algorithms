/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 * Bir diziyi sürekli maksimumu bularak büyükten küçüğe sıralayan bir C programı 
 */


#include <stdio.h>

int main()
{
	float a[5];
	for(int i=0;i<5;i++)//Dizinin terimlerini kullanıcının girmesini sağlamak amacıyla for döngüsü kullandım.
    {
		printf("%d. sayıyı giriniz:\n",i+1);//i+1 denilmesinin sebebi terim sayısı kaçıncı sayıysa bir eksiği oluyor.
		scanf("%f",&a[i]);
    }
    
	
	for(int x=0;x<5;x++)//Terimlerin indislerini veren bir x değişkeni oluşturdum.
	{ 
		int max=x;//max'a x'i atayarak tarayacağı diğer elemanlarla karşılaştırılması sağlanır. 
		for(int n=x;n<5;n++)//Kendinden sonraki elemanlarla karşılaştırılması için yeni bir for dögüsü kullandım.
		{
			if(a[n]>=a[max])//Eğer taradığı eleman baştaki elemandan büyükse artık max'ın büyük sayıya eşit olduğunu gösterdim.
			max=n;
		}
		
		int tut=a[x];//tut değişkeniyle baştaki a[x]i tutup a[x]le a[max]ın birbirleriyle yerlerini değiştirmesi sağlanır.
		a[x]=a[max];//a[x]'e a[max] atanır.
	    a[max]=tut;//a[max]a da a[x]in atanması gerekir ama değerini  değiştirdiğimiz için tutucu olarak koyduğumuz "tut"u atarız.
	    
	    printf("%.0f,",a[x]);//En başa en büyükten başlayarak yerleştirdiğimiz için dizinin düzeltilmiş hali yazdırılır.
	}
	
	
	return 0;
}

