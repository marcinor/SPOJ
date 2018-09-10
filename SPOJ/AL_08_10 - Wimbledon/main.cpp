#include <cstdio>

int main() {
	// your code goes here
	int d, n;
	char w;

	scanf("%d",&d);
	while(d--)
	{
		scanf("%d ", &n);
		int *G;
		G = new int [n];

		for(int i=0; i<n; i++) G[i]=i;

		while(n!=0)
		{
			for(int i=0; i<n/2; i++)
			{
				scanf("%c",&w);
				if(w=='A') G[i]=G[i*2];
				else G[i]=G[2*i+1];
			}
			n=n/2;
		}
		printf("%d\n",G[0]+1);
		delete [] G;
	}

	return 0;
}
