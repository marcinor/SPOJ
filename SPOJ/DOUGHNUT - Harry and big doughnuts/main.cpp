#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, c, k, w;
	cin >> t;
	while(t)
	{
		cin >> c >> k >> w;
		if(c*w<=k) cout << "yes" << endl;
		else cout << "no" << endl;
		t--;
	}
	return 0;
}
