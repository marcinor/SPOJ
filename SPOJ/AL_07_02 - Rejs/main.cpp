#include <iostream>
#include <cmath>
using namespace std;

long long int szukaj(long long int a, long long int b, long long int c, char z1, char z2)
{
	long long int l=0;
	string k;
	cin >> k;

	while((a>0 || b>0) && c>0)
	{
		if(k[l]==z1) a--;
		if(k[l]==z2) b--;
		l++;
		c--;
	}
	if(a<=0 && b<=0) return l;
	else return l+1;
}

int main() {
	// your code goes here
	long long int n, sx, sy, mx, my, d, kx, ky, w;

	cin >> n;
	while(n--)
	{
		cin >> sx >> sy >> mx >> my >> d;

		kx=fabs(sx-mx);
		ky=fabs(sy-my);

			if(sx >= mx)
			{
				if(sy >= my) w=szukaj(kx, ky, d, 'W', 'S');
				else w=szukaj(kx, ky, d, 'W', 'N');
			}
			else
			{
				if(sy >= my) w=szukaj(kx, ky, d, 'E', 'S');
				else w=szukaj(kx, ky, d, 'E', 'N');
			}

			if(w<=d) cout << w << endl;
			else cout << "NIE" << endl;
	}
	return 0;
}
