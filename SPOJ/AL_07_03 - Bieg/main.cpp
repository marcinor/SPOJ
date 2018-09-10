#include <cstdio>
using namespace std;

int main() {
	// your code goes here
	int n;
	long long int a, b, sp=0, sk=0, x, y;
	scanf ("%d", &n);
	while(n--)
	{
		scanf ("%lld %lld", &a, &b);
		x=b/3;
		sk=90*(x/10)+7*(x/5)+3*x+5*(b/5)+45*(b/10);
		x=(a-1);
		y=x/3;
		sp=90*(y/10)+7*(y/5)+3*y+5*(x/5)+45*(x/10);
		printf("%lld \n", (sk-sp));
	}
	return 0;
}
