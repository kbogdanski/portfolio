//Program do SPOJ - nauka programowania
//Zadanie Pojemnosc dysku - JDYSK

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double d;

	while (cin>>d) {
		if (d>0) {
			d = d*1000000000;
			d = d/1024;
			d = d/1024;
			d = d/1024;
			printf ("%.4f\n",d);
		} else {
			cout<<"Error"<<endl;
		}
	}

	//cin>>d;
	return 0;

}