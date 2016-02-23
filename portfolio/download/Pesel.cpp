//Program do SPOJ - nauka programowania
//Zadanie Pesel - JPESEL

#include <iostream>
#include <string>

using namespace std;

int main () {

	int t,suma;
	string pesel;

	cin>>t;

	while(t--) {
		cin>>pesel;
		suma = ((int)pesel[0] - 48) + (((int)pesel[1]-48)*3) + (((int)pesel[2]-48)*7) + (((int)pesel[3]-48)*9) 
			+ ((int)pesel[4]-48) + (((int)pesel[5]-48)*3) + (((int)pesel[6]-48)*7) + (((int)pesel[7]-48)*9) + ((int)pesel[8]-48)
			+ (((int)pesel[9]-48)*3) + ((int)pesel[10]-48);
		if ((suma > 0) && (suma%10 == 0)) {
			cout<<"D"<<endl;
		} else {
			cout<<"N"<<endl;
		}
	}
	return 0;
}
