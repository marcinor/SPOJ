#include <iostream>
using namespace std;

int main() {

	// your code here
	double pi=3.141592654;
	double r,d,S;

	do{
		cin >> r;
	}while((2*r)<1 || (2*r)>2000);
	do{
		cin >> d;
	}while(d<1 || d>2000);

	S=pi*((r*r)-((d*d)/4));
	cout.precision(15);
	cout << S << endl;

	return 0;
}
