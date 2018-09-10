#include <cstdio>

using namespace std;

struct Czas
{
    int a_year;
    int a_mon;
    int a_day;
    int a_hour;
    int a_min;
    int a_c;
};

int main()
{
    Czas Wymarsz={0,0,0,0,0};
    int s, v, t;
    int z;
    //dane wejsciowe w formacie RRRR.MM.DD HH:MM s v
    //s- droga do przbycia
    //v- predkosc
    //kiedy wyruszyc z dokladnoscia do minuty zaokraglanej w dol
    while(scanf("%d.%d.%d %d:%d %d %d", &Wymarsz.a_year, &Wymarsz.a_mon, &Wymarsz.a_day, &Wymarsz.a_hour, &Wymarsz.a_min, &s, &v)!=EOF)
    {
        Wymarsz.a_c=Wymarsz.a_hour*60+Wymarsz.a_min;
        t=s*60/v;

        Wymarsz.a_c=Wymarsz.a_c-t%1440;
        z=t/1440;

        if(Wymarsz.a_c<0)
        {
                    	Wymarsz.a_c=1440+Wymarsz.a_c;
            z++;
        }
        Wymarsz.a_hour=Wymarsz.a_c/60;
        Wymarsz.a_min=Wymarsz.a_c%60;

        while(z--)
        {
            Wymarsz.a_day--;
            if(Wymarsz.a_day==0)
            {
                Wymarsz.a_mon--;
                if(Wymarsz.a_mon==0)
                {
                    Wymarsz.a_day=31;
                    Wymarsz.a_mon=12;
                    Wymarsz.a_year--;
                }else if(Wymarsz.a_mon==4 || Wymarsz.a_mon==6 || Wymarsz.a_mon==9 || Wymarsz.a_mon==11) Wymarsz.a_day=30;
                else if(Wymarsz.a_mon!=2) Wymarsz.a_day=31;
                else{
                    if((Wymarsz.a_year%4==0 && Wymarsz.a_year%100!=0) || Wymarsz.a_year%400==0) Wymarsz.a_day=29;
                    else Wymarsz.a_day=28;
                }
            }
        }

        printf("%d.%02d.%02d %02d:%02d\n", Wymarsz.a_year, Wymarsz.a_mon, Wymarsz.a_day, Wymarsz.a_hour, Wymarsz.a_min);
    }
    return 0;
}
