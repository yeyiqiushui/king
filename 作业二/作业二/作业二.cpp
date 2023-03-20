#include <iostream>
using namespace std;
class Time
{
public:
    void setnoteTime(int br)
    {
        note = br;
    }
    void tickTime(int hour, int min, int second)
    {
        for (int i = 0;i < note; i++)
        {
            cout << hour << ":" << min << ":" << second;
                second++;
                if (second > 59)
                {
                    min++;
                    second = 0;
                }
                if (min > 59)
                {
                    hour++;
                    min = 0;
                }
                if (hour > 23)
                {
                    hour = 0;
                }
                if (hour < 10)
                {
                    cout << "0" << hour << ":";
                }
                else
                {
                    cout << hour << ":";
                }
                if (min < 10)
                {
                    cout << "0" << min << ":";
                }
                else
                {
                    cout << min << ":";
                }
                if (second < 10)
                {
                    cout << "0" << second ;
                }
                else
                {
                    cout << second ;
                }
            if (hour < 13)
                cout << "am" << endl;
            else
                cout << "pm" << endl;
        }
    }
private:
    int note;
};
int main()
{
    int hour = 0, min = 0, second = 0;
    cin >> hour >> min >> second;
    int br;cin >> br;
    class Time tick;
    tick.setnoteTime(br);
    tick.tickTime(hour, min, second);
}