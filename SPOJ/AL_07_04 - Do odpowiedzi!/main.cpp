#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x=0;
	bool P[1300000];
    int A[100021];
    for(int i=0; i<1300001; i++) P[i]=true;
    for(int i=2; i*i<=1300000; i++) if(P[i]) for(int j=i*i; j<=1300000; j+=i) P[j]=false;
    for(int i=2; i<1300001; i++) if(P[i]) {A[x]=i; x++;}

	int n, k, p, l, z;

	cin >> n;
	while(n--)
	{
		int m;
    	cin >> m;

    	k=0;
    	int t[m];
    	for(int i=0; i<m; i++) t[i]=(i+1);

    	for(int i=0; i<m-1; i++)
    	{
        	p=k-1;
    		l=A[i];
        	k=(p+l)%(m-i);
        	t[k]=0;
        	z=0;
        	for(int j=0; j<m-i; j++)
        	{
            	if(t[j]!=0) t[j-z]=t[j];
            	else z++;
        	}
    	}

    	cout << t[0] << endl;
	}
	return 0;
}
