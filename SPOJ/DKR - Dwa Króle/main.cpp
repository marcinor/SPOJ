#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n, a, b;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		cout << (a*a*b*b)-(9*a*b)+6*(a+b)-4 << endl;
	}
	return 0;
}
