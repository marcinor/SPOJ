#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t, a, b, c, n, x;
    double p, s, k, w;
    cin >> t;
    while(t--)
    {
        w=0;
        cin >> n >> k;
        k=k*0.1;
        while(n--)
        {
            cin >> a >> b >> c;
            if (a+b>c && a+c>b && b+c>a)
            {
                p=(a+b+c)/2.0;
                s=sqrt(p*(p-a)*(p-b)*(p-c));
                w=w+(s*k);
            }
        }

        x=int(w*10);
        if(x%10>4) w=int(w)+1;
        else w=int(w);
        cout << int(w) << endl;
    }
    return 0;
}
