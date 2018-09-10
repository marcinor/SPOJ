#include <iostream>
using namespace std;

int nwd(int a, int b){
		int c;
		while(b != 0)
		{
			c = a % b;
			a = b;
			b = c;
		}
		return a;
	}

int main() {
	// your code goes here
	int t,a,b;
	cin >> t;

	for(int i=0; i<t; i++)
	{
		cin >> a >> b;
		cout << nwd(a,b)*2 << endl;
	}
	return 0;
}
