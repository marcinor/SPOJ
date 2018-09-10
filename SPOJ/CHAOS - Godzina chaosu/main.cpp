#include <iostream>

using namespace std;

void wyswietl(int a, int b) // wyœwietlanie w formacie HH:MM
{
    if(a>9)
        {
            if(b>9) cout << a << ":" << b;
            else cout << a << ":0" << b;
        } else
        {
            if(b>9) cout << "0" << a << ":" << b;
            else cout << "0" << a << ":0" << b;
        }
        cout << endl;
}

int main()
{
    int t, h, m, o, a, b;
    string g;
    cin >> t;

    while(t--)
    {
        cin >> g;

        h=(g[0]-48)*10+(g[1]-48); // przetwarzanie na liczby godziny
        o=(g[1]-48)*10+(g[0]-48); // odwrotność godziny
        m=(g[3]-48)*10+(g[4]-48); // przetwarzanie na liczby minut
        a=m/10;
        b=m%10;

        if(h>0 && h<10)
        {
            if(m<(50+h))
            {
                if(m<h) wyswietl(h,h);
                else if(b<h) wyswietl(h,a*10+h);
                else wyswietl(h,(a+1)*10+h);
            }else if(h!=9) wyswietl(h+1,h+1);
            else cout << "10:01" << endl;
        }
        if((h>9 && h<15) || (h>19 && h<23))
        {
            if(m<o) wyswietl(h,o);
            else wyswietl(h+1,o+10);
        }
        if(h==15)
        {
            if(m<o) wyswietl(h,o);
            else cout << "20:02" << endl;
        }
        if(h>15 && h<20){cout << "20:02" << endl;}
        if(h==23)
        {
            if(m<o) wyswietl(h,o);
            else cout << "00:00" << endl;
        }
        if(h==0)
        {
            if(m<55)
            {
                if(m<9) wyswietl(h,m+1);
                else if(a>b) wyswietl(h,(a*10)+a);
                else wyswietl(h,(a+1)*10+a+1);
            }else cout << "01:01" << endl;
        }
    }
    return 0;
}
