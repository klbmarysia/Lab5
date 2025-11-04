// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


/*int main()
{

	int tab[10];
	for (int i = 0; i < 10; i++) {
		cout << "podaj liczbe calkowita ";
		cin >> tab[i];
	}
	for (int k = 9; k >=0 ; k--) {
		cout << tab[k]<< endl ;
	}

}

//zd.2
int main() {
	int n;
	cout << "Podaj wielkosc tablicy ";
	cin >> n;
	int* tab = new int[n];
	tab[0] = 0;
	tab[1] = 1;
	for (int i = 2; i < n; i++) {
		 tab[i]= tab[i - 1] + tab[i - 2];
	}
	for (int k = 0; k < n ; k++) {
		cout << tab[k] << endl;

	}

}
*/
//zd.3
#include <cstdlib>
int main() {
	int tab[10];
	double srednia = 0;
	
	for (int i = 0; i < 10; i++) {
		tab[i] = rand() % 10 ;
	}
	for (int k = 0; k < 10; k++) {
		cout << tab[k] << endl;
		srednia = tab[k] + srednia;
	}
	srednia = srednia / 10;
	cout << srednia << endl;

}





