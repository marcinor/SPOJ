#include <iostream>
using namespace std;

int main() {
	char z;
	int x,y,w;

	while(cin >> z >> x >> y){
		switch(z){

			case '+':
				w=x+y;
				cout << w << endl;
			break;

			case '-':
				w=x-y;
				cout << w << endl;
			break;

			case '*':
				w=x*y;
				cout << w << endl;
			break;

			case '/':
				w=x/y;
				cout << w << endl;
			break;

			case '%':
				w=x%y;
				cout << w << endl;
			break;
		}
	}

	return 0;
}
