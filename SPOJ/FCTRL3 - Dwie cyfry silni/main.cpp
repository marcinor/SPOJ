#include <iostream>
using namespace std;

void silnia(int a){
	int s=1;
	do{
		if(a!=0) s*=a;
	}while(a--);
	cout << (s%100)/10 << " " << s%10 << endl;
}

int main(void) {
	int d, n;
	cin >> d;
	while(d--){
		cin >> n;
		if(n<10 && n!=0) silnia(n);
		else if(n==0) cout << "0 1" << endl;
		else cout << "0 0" << endl;
	}
	return 0;
}
