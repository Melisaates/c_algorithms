/*Mlisa ATEŞ
 *atemel12@gmail.com
 *09.01.2020
 *Bir dosyadan öğrenci bilgileriyle linked list oluşturup öğrenci ekleme ve çıkarma.
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//öğrenci structı tanımladık.1 öğrencinin numarası adı ve soyadı için char dizileri oluşturuldu.
struct student{
  char no[10],ad[20],soyad[20];
  struct student*ptr;//Bağlı liste oluşturmak için her öğrenciye bir pointer atayarak her öğrenci diğerinr bağlandı.
}head={"no","ad","soyad",NULL};//Listelendiğinde daha çok anlaşılır olması için bir başlık oluşturdum.

struct student*temp=&head;//temp global bir pointer atadım çünkü her değişikliği diğer fonksiyonlardan görülebilmesini istedim.
int oku(FILE*f)//
{
  if(f==NULL)//Dosyada herhangi bir sorun varsa veya boşsa 0 döücek.
  return 0;
  
  char l[50];//Bir dizi oluşturdum.
  while(fgets(l,50,f)!=NULL)//Dosyanın sonuna kadar tanımladığımız diziye okuması sağlanır.
  {
    temp->ptr=(struct student*)malloc(sizeof(struct student));//En başta balığın adresini tutan tempin gösterdiği yerdeki ptr için yani bir sonraki öğrenci için mallocla yer tuttum. 
    char*no=strtok(l,"\t");//İlk boşluğa gelene kadar olan kısım öğrencilerin numarasını belirtir.
    char*ad=strtok(NULL,"\t");//İkinci boşluğa gelene kadar olan kısım öğrencilerin adını belirtir.
    char*soyad=strtok(NULL,"\t");//Üçüncü boşluğa gelene kadar olan kısım öğrencilerin soyadını belirtir.
    if(no!=NULL&&ad!=NULL&&soyad!=NULL)//Eğer bulduğumuz değerler 0 değilse diye şart koydum.
    {//Hazır fonksiyonla dizide bulduğumuz değerleri sınırlandırarak mallacola yer tuttuğumuz öğrencinin bilgierine atadım.
      no=strncpy(temp->ptr->no,no,10);
      ad=strncpy(temp->ptr->ad,ad,20);
      soyad=strncpy(temp->ptr->soyad,soyad,20);
    }
    temp=temp->ptr;//Döngüyü devam ettirebilmek için her adrese bir sonrakinin adresini koydum

  }
  temp->ptr=NULL;//İşlemler bitince NULL a eşitledim.
  
  return 0;

}

void yaz(FILE*f)
{
  struct student*p=&head;//p pointerına başlığın adresini atadım.
  while(p!=NULL)
  {
    printf("\n%.10s %.20s %.20s",p->no,p->ad,p->soyad);//Her öğrencinin bilgilerini yazdırdım.
    p=p->ptr;//Döngü olması için her kişinin adresini diğerine atadım.
  }

}

void serbest(FILE*f)
{
  struct student*k=head.ptr;//k pointerına mallocla ilk oluşturulan öğrencinin adresini koydum.
  while(k!=NULL)
  {//Farklı bir struct student tanımlayarak döngüyü devam ettirdiğimizde bir önceki serbets kaldığı için bir sonrakini tuttum.
    struct student*next=k->ptr;
    free(k);//Serbest bıraktım.
    k=next;//Bir sonraki kişiyi k ya atadım.
  }
}

int sil(FILE* f)
{   f = fopen("ogrenci.txt","r");//Okumak için dosyayı açtım.
	if(f==NULL)
	{
		return -1;
	}
	
	FILE* p=fopen("yeniogrenci.txt","w");//Değişiklikleri kaydetmek için yeni bir dosyayı w ile açtım. 
	if(p==NULL)//Eğer dosyada sıkıntı varsa önceki dosyada kapatılarak fonksiyondan çıkılır.
	{
		fclose(f);
		return -1;
	}
	
	
    char a[10];//char dizisi tanımlayarak kullanıcıdan numara alınır.
    printf("Silmek istediginiz ogrencinin numarasini giriniz.");
    scanf("%10s",a);
    
	char k[100];
	while(fgets(k,100,f)!=NULL)//Dosya diziye okunur.
	{
		if(a[0]!=k[0]||a[1]!=k[1])//Eğer girilen numarayla dizinin başından ilk iki karakteri eşit değilse dosyaya yazdırdım.
		{
			fputs(k,p);
	    }
	}
	fseek(f,0,SEEK_SET);//Fonkiyonu sıfırladık.
	//İki dosyada kapatılarak fonksiyondan çıkılır.
	fclose(f);
	fclose(p);
	return 0;
}
int ekle(FILE*f)
{
  f=fopen("ogrenci.txt","a+");//Dosyayı hem okumak hem de sonuna eklenti yapmak için a+ ile açtım.
  if(f==NULL)
  return 0;
	
	 
  struct student *c;//Bir c struct student pointerı oluşturdum.
  c=(struct student*)malloc(sizeof(struct student));//Yeni öğrenci için yer tuttum.
  printf("Eklemek istediğiniz öğrencinin bilgilerini giriniz.");//Kullanıcıdan yeni öğrenci için bilgileri aldım.
  scanf("%10s",c->no);
  scanf("%20s",c->ad);
  scanf("%20s",c->soyad);
  temp->ptr=c;//Global olarak tanımladığım tempin göstediği ptr'ye en son NULL atamıştım burda onun yerine yeni öğrencinin adresini atadım.
  c->ptr=NULL;//En son eklenen öğrencinin içinde tuttuğu adrese NULL koydum. 
  fprintf(f,"\n%s\t%s\t%s",c->no,c->ad,c->soyad);//Dosyaya yeni öğrencinin bilgilerini yazdırdım.
  return 0;
  
}




int main(){
  FILE*f=fopen("ogrenci.txt","r");//Okumak için bir f dosya türünde pointerla dosyayı açtım.
  oku(f);//Her öğrenci ilk başta okunulup bağlı liste oluşturur.
  int x;//Tercih yapmak için bir değişken atadım.
  printf("öğrenci eklemek için 1'e,silmek için 2'ye,değişikliklerle birlikte ekrana yazdırmak için 3'e basınız.");
  scanf("%d",&x);//Kullanıcıdan o değişkeni aldım.
  if(x==1)
  ekle(f);//Öğrenci eklemek için ekle fonksiyonu oluşturdum.
  else if(x==2)
  {
	  sil(f);//Öğrenci silmek için sil fonksiyonu oluşturdum.
      fclose(f);//İşimiz bittiğinde dosyayı kapattım.
      remove("ogrenci.txt");//Eski dosyayı sildim.
      rename("yeniogrenci.txt","ogrenci.txt");//Yeni oluşturulup değişikliklerin kaydedildiği dosyanın ismi değiştirilerek eski dosyanın ismini aldı.
  }
  else
  yaz(f);//Listedeki değişiklikleri kontrol etmek için ekrana yazdırdım.
  serbest(f);//Malloc ile alınan yerleri en sonda serbest bırakarak hafızayı meşgul etmemiş oldum.
 
  
  
  return 0;
}
