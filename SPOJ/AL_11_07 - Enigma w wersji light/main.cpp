#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	string x;
	char y;

	while(getline(cin,x))
	{
		for(int i=0; i<x.length()-1; i++)
		{
			y=x[i];
			x[i]=x[i+1];
			x[i+1]=y;
			i++;
		}
		cout << x << endl;
	}
	return 0;
}
