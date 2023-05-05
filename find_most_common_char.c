/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com
 *Bİr string dizisini parameter olarak alıp, dizide en fazla geçen karakteri bulan bir fonksiyon yazan program.
 */


#include <stdio.h>

char fonk(char ad[],int a);//Fonksiyonun prototipini yazdım.
int main()
{

    char ad1[]="ankara";
    char ad2[]="Bu bir stringdir";
   
   //Fonksiyonları çağırdım.
    printf("%c\n",fonk(ad1,7));
    printf("%c",fonk(ad2,15));
    
     return 0;
}
   
char fonk(char ad[],int a) 
{
    
    char b = ad[0];//b'ye tutması için ilk karakteri atadım.
    int l = 0;//a değişkenine de indisi atadım.
    int sayac=1;//Bu değişkeni her karakterden kaç tane olduğunu sayması için oluşturdum.
    //Karşılaştırarak aynı karakterden bulabildiğim için kendisiyle birlikte sayaca katılmalı. Bu yüzden 1'den başlattım.
    
    for(int m=0;m<a;m++)//Her karakteri diğer işlemlere katması için for döngüsü oluşturdum.
    {
        for(int i=m+1;i<a;i++)//m indisli karakter sadece kendisinden sonraki karakterlere baksın diye i'yi m+1'den başlatarak arttırdım.
        {
            if(ad[i]==ad[m])//Eğer kendisiyle aynı karakter bulunduysa sayacı arttırarak kaç tane o karakterden olduğu tespit edilmiş olunur.
            {
                sayac++;  
            }
        }
        
        if (sayac > l)//Her sayılan sayactaki değerlerden hangisi büyükse a'ya onu atarız.
        {
            l= sayac;//En büyük miktarda olanı atadık sayaca.
            b = ad[m];//En büyük miktarda olanı da b'ye atayarak hangi karakterden en fazla var bulmuş oluruz.
         }
            
     }
     
    return b;
}
