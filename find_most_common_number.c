/*Melisa ATEŞ
 *05.12.2020
 *atesmel2@gmail.com 
 * Bİr İNTEGER dizisini parameter olarak alıp, dizide en fazla geçen sayıyı bulan bir fonksiyon yazan program.
 */


#include <stdio.h>
int fonk(int numb[],int m);//Fonksiyonun prototipini yazdım.
int main()
{
    
    
    int numb[19]={34,2,3,5,2,6,8,8,9,8,55,4,32,2,8,90,3434,9,34};
    printf("%d\n",fonk(numb,19));//Fonksiyonu çağırdım.
    return 0;
}

int fonk(int numb[],int m)
{
    int y = numb[0];//y'ye tutması için ilk karakteri atadım.
    //a değişkenine de indisi atadım.
    
    int sayac=1;//Bu değişkeni her sayıdan kaç tane olduğunu sayması için oluşturdum.
    //Karşılaştırarak aynı sayıdan bulabildiğim için kendisiyle birlikte sayaca katılmalı. Bu yüzden 1'den başlattım.
    int x = 0;
    
    for(int m=0;m<19;m++)//Her sayıyı diğer işlemlere katması için for döngüsü oluşturdum.
    {
        for(int i=m+1;i<19;i++)//m indisli sayı sadece kendisinden sonraki sayılara baksın diye i'yi m+1'den başlatarak arttırdım.
        {
            if(numb[i]==numb[m])//Eğer kendisiyle aynı sayıyı bulunduysa sayacı arttırarak kaç tane o sayıdan olduğu tespit edilmiş olunur.
            {
                sayac++;
            }
                
        }
        
        if (sayac > x)//Her sayılan sayactaki değerlerden hangisi büyükse x'e onu atarız.
        {
            x = sayac;//En büyük miktarı atadık sayaca.
            y = numb[m];//En büyük miktarda olanı da y'ye atayarak hangi sayıdan en fazla var bulmuş oluruz.
        }
            
     }
     return y;
}
   
    
    

    
  
