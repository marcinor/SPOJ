#include <iostream>
using namespace std;

int main() {
	int t;
	unsigned int wr,w,n,k;

	cin >> t;
	while (t--)
	{
		w=1;
		cin >> n >> k;
		if( k>n-k ) k=n-k;
		for(int i=1; i<=k; i++)
		{
			//w*=(n-i+1)/i;
			wr = w%i;
			w = w/i;
			w = w*(n-i + 1) + ((wr*(n-i + 1))/i);
		}
		cout << w << endl;
	}

	return 0;
}
