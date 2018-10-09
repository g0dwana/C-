#include <iostream>

using namespace std ;

int main ()

{
	
 // kullanici adi = user45 sifre = 123asd
 
 	int secim ;
 	double cevir,para=1000;
 	string kullaniciadi,sifre ;
 	
 	cout << " BALCI BANKASINA HOSGELDINIZ \n*************************";
 	cout << "\nKullanici adinizi giriniz\n:";
	cin >> kullaniciadi;
	cout << "\nSifrenizi giriniz\n:";
	cin >> sifre; 
	
	// 1 Dolar = 3.52 TL
	// 1 euro = 4.16 TL
	// 1 Sterlin =4.58 TL
	if (kullaniciadi == "user45"&& sifre =="123asd")
	{
		cout << "Toplam paraniz = " << para << endl;
		cout << "1-TL'yi Dolar'a cevir \n2-TL'yi Euro'ya cevir \n3-TL'yi Sterlin'e cevir \n4-Cikis Yap";
		cout << "\n Seciniz : ";
		cin >> secim;
		while (secim <1 || secim >4 )
		{
			cout << "Lutfen 1 ila 4 arasinda seceneklerden birini seciniz :";
			cin >> secim;
		}
		if (secim == 1 )
		{
			cevir = para /3.52;
			cout << "Paraniz donusturuldu , yeni paraniz =" << cevir << "Dolar vardir.";
		}
		else if(secim ==2)
		{
			cevir = para /4.16;
			cout << "Paraniz donusturuldu , yeni paraniz =" << cevir << "Euro vardir.";
		}
		else if(secim ==3)
		{
			cevir = para /4.58;
			cout << "Paraniz donusturuldu , yeni paraniz =" << cevir << "Sterlin vardir.";
		}
		else 
		{
		
			cout << "\nBasariyla cikis yapildi " ;
		}
		
		
	
		
	}
	else
	{
	cout << "Kullanici adiniz veya sifreniz hatalidir!";
	cout << "\n Uygulamadan otomatik olarak cikarildiniz!";

	}
		
	
	
	
	
	
}
