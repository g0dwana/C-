#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	
	int tahmin,rastgelesayi,mutlakfark,sayac=0;
	
	srand(time(NULL));
	
	cout << "Bir sayi tuttum , tuttugum sayi 1 ile 100 arasindadir. Hadi tahmin edin xd  :  ";
	
	cin >> tahmin;
	
	while (tahmin < 1 || tahmin > 100)
	{
		cout << "Bir ile 100 arasinda bir deger girsene kardes xd" ;
		cin >> tahmin ;
	}
	
	rastgelesayi = rand() % 100 +1;
	
	while(rastgelesayi != tahmin)
	{
	
		mutlakfark = rastgelesayi-tahmin;
		if(mutlakfark < 0)
		{
			mutlakfark =-1*mutlakfark;
			}	
			else
			{
				mutlakfark =1*mutlakfark;
			}
			
			if (mutlakfark >0 && mutlakfark <= 10)
			{
				cout <<"Cok yaklastin :)" ;
			}
			else	if (mutlakfark >10 && mutlakfark <= 20)
			{
				cout <<"Yaklastin :)" ;
			}
			else	if (mutlakfark >20 && mutlakfark <= 40)
			{
				cout <<"Yavas yavas yaklasiyorsun :)" ;
			}
			else	if (mutlakfark >40 && mutlakfark <= 80)
			{
				cout <<"Cok uzaksin :(" ;
			}
			
			else if (mutlakfark > 80 )
			{
				cout <<"Aman aman nerelere geldin. Bir daha dene" ;
			}
			
			cin >> tahmin;
			
			while (tahmin < 1 && tahmin > 100)
	{
		
		cout << "Bir ile 100 arasinda bir deger girsene kardes xd" ;
		cin >> tahmin ;
	}
		sayac++;	
			
	}
		
		cout << "tebrikler :)" ;
		
		cout <<"Tebrikler ! Tahmininiz dogru \t" << sayac << "  kadar tahmin yapiniz";





}
