//Program do SPOJ - nauka programowania
//Zadanie Pierscionek - JPIERSC

#include <iostream>
#define PI 3.14
#define RO 19.3

using namespace std;

int main()
{
	int a,b,x,n;
	double v,R,r,d;

	while(cin>>a>>b>>x>>n){
		R=a/(2.0*PI);
		r=b/(2.0*PI);
		v=2.0*PI*R*r*r;
		d=RO*v;
		if(a<=0 || b<=0 || R<=r)
			cout<<"BRAK"<<endl;
		else if((d*x)/1000.0>n)
			cout<<"NIE"<<endl;
		else
			cout<<"TAK"<<endl;;
	}
	return 0;
}