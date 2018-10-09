#include <iostream>

using namespace std;

int main()
	
{

	int sayigir;
	
	cout << "Bir sayi giriniz:";
	cin >> sayigir;
	
	if (sayigir >= 100 &&((sayigir%2) == 0 )) 
	{
		cout <<"Sayi hem 100'den buyuk veya esittir ve bu sayi cifttir";
	}
		else if ( sayigir<= 100 && ((sayigir%2) == 0 ))

	{
		cout << "Sayi hem 100'den kucuktur veya esittir ve bu sayi cifttir.";
	}
	else if (sayigir >= 100 && ((sayigir%2) != 0)) 
	{
		cout << "Sayi hem 100'den buyuktur ve ya esittir ve bu sayi tektir" ;
	
	}
	else
	{
		cout << "Sayi hem 100'den kucuktur veya esittir ve bu sayi tektir" ;
	}
	
	
	
	
	
}

