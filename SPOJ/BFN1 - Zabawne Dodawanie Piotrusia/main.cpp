#include <iostream>
#include <cmath>
using namespace std;

int main() {

	// your code here
		int t,n,x,a[20],y;
	int k=0,l,licznik;
	bool czy=false;

	do{
		cin >> t;
	}while(t<0 && t>80);

	for(int i=0; i<t; i++){
		licznik = 0;
		do{
			cin >> n;
		}while(n<0 && n>80);
	do{
		x=n/10;
		k=0;
		a[k]=n%10;

		while(x!=0){
			k++;
			a[k]=x%10;
			x=x/10;
		}
		y=0;
		l=k;
		for(int j=0; j<k+1; j++)
		{
			//cout << a[j];
			y= y+pow(10,l)*a[j];
			l--;
		}
		if(n==y) czy=true;
		else {
				czy=false;
				licznik++;
				n=n+y;
			}
	}while(czy==false);
		cout << n << " " << licznik << endl;

	}

	return 0;
}
