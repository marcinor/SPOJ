    #include <iostream>
    using namespace std;

    int main() {
    	char z;
    	int x,y,w;
    	int r[10];

    	while(cin >> z >> x >> y){
    		switch(z){

    			case 'z':
    				r[x]=y;
    			break;

    			case '+':
    				w=r[x]+r[y];
    				cout << w << endl;
    			break;

    			case '-':
    				w=r[x]-r[y];
    				cout << w << endl;
    			break;

    			case '*':
    				w=r[x]*r[y];
    				cout << w << endl;
    			break;

    			case '/':
    				w=r[x]/r[y];
    				cout << w << endl;
    			break;

    			case '%':
    				w=r[x]%r[y];
    				cout << w << endl;
    			break;
    		}
    	}

    	return 0;
    }
