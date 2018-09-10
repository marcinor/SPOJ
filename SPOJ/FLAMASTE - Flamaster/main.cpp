#include <iostream>
using namespace std;

int main() {

	// your code here
			int C=1,licznik,d;
		char x1='a',x2='a';
		string w;

		do{
			cin >> C;
		}while(C<1 && C>50);

		string s[C];

		for(int i=0; i<C; i++)
		{
			cin >> s[i];
			licznik=0;
			w="";
			d=s[i].length();
			for(int j=0; j<d; j=j+licznik)
			{
				licznik=1;
				x1=s[i][j];
				for(int k=j+1; k<d; k++)
				{
					x2=s[i][k];
					if(x1==x2) licznik++;
					else break;
				}
				if(licznik==1)cout << x1;
				else if(licznik==2)cout << x1 << x1;
				else cout << x1 << licznik;
			}
			cout << endl;
		}

	return 0;
}
