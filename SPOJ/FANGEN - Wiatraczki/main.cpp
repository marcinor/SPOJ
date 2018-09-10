#include <iostream>
using namespace std;

void wiatraczek(int l, int x, char **w)
{
	if((l+1)==x)
	{
		for(int i=x-1; i<x+1; i++)
		{
			for(int j=x-1; j<x+1; j++)
			{
				w[i][j]='*';
			}
		}
	}
	else
	{
		for(int i=0; i<(x-l); i++)
		{
			w[l][(2*x)-(l+1+i)]='*';
			w[(2*x)-(l+1)][i+l]='*';
			w[i+l][l]='*';
			w[(2*x)-(l+1+i)][(2*x)-(1+l)]='*';
		}
		wiatraczek (l+1, x, w);
	}

}

void wiatraczek_prawy(int l, int x, char **w)
{
	if((l+1)==x)
	{
		for(int i=x-1; i<x+1; i++)
		{
			for(int j=x-1; j<x+1; j++)
			{
				w[i][j]='*';
			}
		}
	}
	else
	{
		for(int i=0; i<(x-l); i++)
		{
			w[l][i+l]='*';
			w[i+l][(2*x)-(l+1)]='*';
			w[(2*x)-(1+l)][(2*x)-(l+1+i)]='*';
			w[(2*x)-(l+1+i)][l]='*';
		}
		wiatraczek_prawy (l+1, x, w);
	}
}

int main() {

	int a,n,licznik=0;
	while(cin >> a && a!=0)
	{
		// jeszcze znak
		char **w;
		if(a>0) n=a;
		else n=(-a);
		w = new char *[n*2];
		for(int i=0; i<n*2; i++)
			w[i] = new char[n*2];

		for(int i=0; i<2*n; i++)
		{
			for(int j=0; j<2*n; j++)
			{
				w[i][j]='.';
			}
		}

		if(a>0)
		{
			licznik=0;
			wiatraczek (licznik,n,w);
		}else
		{
			licznik=0;
			wiatraczek_prawy (licznik,n,w);
		}

		for(int i=0; i<2*n; i++)
		{
			for(int j=0; j<2*n; j++)
			{
				cout << w[i][j];
			}
			cout << endl;
		}
		cout << endl;

		for(int i(0); i<n*2; i++)
    		delete [] w[i];
 		delete [] w;
	}

	return 0;
}
