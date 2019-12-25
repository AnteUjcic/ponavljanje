#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;
int main() {
//	int peppa_pig[5][5],
int x,y;
 
	cout << "upisite broj za velicinu matrice npr ako stavite 5 matrice ce biti 5X5: ";
	cin >> x;	
//	peppa_pig[x];
	 int i,o,p,q=1;
	
	 for (i = 2;i <= x;i++) {
		 p = p + x+1;
		   q = q + p;

		 }
	 cout << q;

system("pause");
return 0;
	}

