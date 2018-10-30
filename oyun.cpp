
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

	int can=100,dusmancan=100,secim,vurus,olasilik,sayac=0,canavarolasiligi;
	
	srand(time(NULL));
	
	cout << "Maceraya Hosgeldiniz ! *******************";
	cout << " \n \n KARSINA DEV BIR YARATIK CIKTI ! Ne yapmak istiyorsun ? \n1-SALDIR\n2-YETENEK KULLAN\n Secim =";
	cin >> secim;
	while(secim < 1 || secim > 2)
	{
		cout << " \n1 ya da 2 degerini secmek zorundasiniz\n";
		cin >> secim;
	}
	
while(can > 0 && dusmancan > 0)
	{
		if(sayac >= 1)
		{
			cout << "\n\n1-SALDIR\n2-OZEL GUCUNU KULLAN \n Secim = ";
			cin >> secim;
		}
		
		if(secim == 1)
		{
			vurus = rand() %10 + 1;
			dusmancan = dusmancan - vurus; 
			cout << "\nBIR VURUS YAPTINIZ ! Dusman cani = \n" << dusmancan;
		}
		else
		{
			olasilik = rand() % 20 + 1;
			if(olasilik%5 == 0)
			{
				vurus = 25;
				dusmancan = dusmancan - vurus;
				cout << "\nCOK SERT BIR VURUS YAPTINIZ ! Dusman cani = \n" << dusmancan;
			}
			else
			{
				vurus = 0;
				dusmancan = dusmancan - vurus;
				cout << "\nISKALADINIZ ! Dusman cani =\n " << dusmancan;
			
			}
		}

	

	
	
	canavarolasiligi = rand() % 3 + 1 ;
	
	if(canavarolasiligi == 1)
	{
		vurus = rand()%5+1;
		can = can - vurus;
		cout << "\n Canavar vurdu ! Kalan canin = \n " << can; 
	}
	
	else if (canavarolasiligi == 2)
	{
		vurus = rand()%14 + 1;
		can = can - vurus;
		
		cout << "\n Canavar sert vurdu ! Kalan canin =" << can;
	}
	
	else
	{
		vurus = rand()%14 + 1 ;
		can = can - vurus;
			cout << "\n Canavar kritik vurdu ! Kalan canin =" << can;
		
	}
	
	sayac++;
	
}
	
	if(dusmancan > 0 && can <= 0)
	{
		cout << "\n \n OLDUNUZ";
		 
	}
	else
	{
		cout << "\n \n TEBRIKLER CANAVARI OLDURDUNUZ ! ";
	}
}
