/*Melisa ATEŞ
 *atesmel12@gmail.com
 *04.11.2020
 *Kullanıcının girdiği sayıda satırı olan bir üçgen basan program.
 */


#include <stdio.h>

int main()
{
    int n;
    printf("n sayısını giriniz:\n");
    scanf("%d",&n);
    
    for(int x=1;x<=n;x++)//x=satır numarası.
    {
        for(int z=1;z<=n-x;z++)//Sayıların başındaki boşlukları belirtmek için bir z tanımladım.Girilen sayıdan satır sayısını çıkarırsak istenilen boşluk sayısını buluruz.
        printf(" ");
        
        for(int y=1;y<=x;y++)//y, üçgenimizde yazılan rakamları ifade eder.
        printf("%d",y);
        
        for(int y=x-1;y>0;y--)//Tekrarı sağlamak için azaltan bir for döngüsü kullanılır.
        printf("%d",y);
        
        for(int z=1;z<=n-x;z++)//Sayıların sonundaki boşlukları belirtmek için z değişkeni tanımlayarak bir for döngüsü kullandım.
        printf(" ");
        
        printf("\n");
    }
    
return 0;
}    
      
		
