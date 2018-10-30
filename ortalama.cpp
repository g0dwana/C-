#include <iostream>
using namespace std;
int main ()
{
	
	int kacsayi,sayigir,i=0,sayac=0;
	double toplam=0;
	cout << "ORTALAMA HESAPLAMA PROGRAMI !!! " << endl;
	cout << "Kac tane sayinin ortalamasini hesaplamak istiyorsunuz ?";
	cin >> kacsayi;
	
	while (kacsayi <0)
	{
		cout <<"Negatif secenek secemezsiniz ! Tekrar giriniz = ";
		cin >> kacsayi;
		if (sayac >= 5)
		{
			cout << "Negatif secmeyin , bu deger 2 alindi";
			kacsayi =2;
		}
		
		
		sayac++;
	
}
	while (i<kacsayi)
	{
		cout << i+1 << ". sayiyi giriniz = ";
		cin >> sayigir;
		toplam+= sayigir;
		i++;
	}
	
		cout << "Ortalama = " << toplam/kacsayi;
	
	
	
	
	
	
	
	
}
