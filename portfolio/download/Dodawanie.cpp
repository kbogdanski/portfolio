//Program do SPOJ - nauka programowania
//Zadanie Dodawanie - JSUMDUZE

#include <iostream>
#include <string>

using namespace std;

int main () {

	int t,d1,d2,i;
	string l1,l2;
	int wynik[1001];
	int pom;

	cin>>t;

	while(t--) {
		cin>>l1;
		cin>>l2;

		d1 = l1.length();
		d2 = l2.length();

		if (d1==d2) {
			d1--;
			d2--;
			i=0;
			pom=0;
			for(d1;d1>-1;d1--) {
				//cout<<"pom = "<<pom<<endl;
				wynik[i] = ((((int)l1[d1]-48) + ((int)l2[d2]-48))+pom)%10;
				//cout<<"wynik["<<i<<"] = "<<wynik[i]<<endl;
				pom = ((((int)l1[d1]-48) + ((int)l2[d2]-48))+pom)/10;
				d2--;
				i++;
			}
		} else {
			if (d1>d2) {
				d1--;
				d2--;
				i=0;
				pom=0;
				for(d2;d2>-1;d2--) {
					//cout<<"pom = "<<pom<<endl;
					wynik[i] = ((((int)l1[d1]-48) + ((int)l2[d2]-48))+pom)%10;
					//cout<<"wynik["<<i<<"] = "<<wynik[i]<<endl;
					pom = ((((int)l1[d1]-48) + ((int)l2[d2]-48))+pom)/10;
					d1--;
					i++;
				}
				while(pom) {
					wynik[i] = (((int)l1[d1]-48) + pom)%10;
					pom = (((int)l1[d1]-48) + pom)/10;
					d1--;
					i++;
				}
				while (d1>-1) {
					wynik[i] = ((int)l1[d1]-48);
					d1--;
					i++;
				}
			}

			if (d1<d2) {
				d1--;
				d2--;
				i=0;
				pom=0;
				for(d1;d1>-1;d1--) {
					//cout<<"pom = "<<pom<<endl;
					wynik[i] = ((((int)l1[d1]-48) + ((int)l2[d2]-48))+pom)%10;
					//cout<<"wynik["<<i<<"] = "<<wynik[i]<<endl;
					pom = ((((int)l1[d1]-48) + ((int)l2[d2]-48))+pom)/10;
					d2--;
					i++;
				}
				while(pom) {
					wynik[i] = (((int)l2[d2]-48) + pom)%10;
					pom = (((int)l2[d2]-48) + pom)/10;
					d2--;
					i++;
				}
				while (d2>-1) {
					wynik[i] = ((int)l2[d2]-48);
					d2--;
					i++;
				}
			}
		}

		if (pom>0) {
			wynik[i] = pom;
		} else {
			i--;
		}

		for (i;i>-1;i--) {
			cout<<wynik[i];
		}
		cout<<endl;
	}
	return 0;
}