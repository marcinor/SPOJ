#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d, n;
	cin >> d;
	while(d--)
	{
		cin >> n;
		if(n==1) cout << 8;
		else if(n==2) cout << 33;
		else cout << (7*n*n+4*n+1);
		cout << endl;
	}
	return 0;
}
