#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void Time(int Hour, int Minutes, int Seconds)
{
    while (Hour != -1)
    {
        for (; Hour < 24; Hour++) // Removed redundant initialization in loop
        {
            for (; Minutes < 60; Minutes++)
            {
                for (; Seconds < 60; Seconds++)
                {
                    // clears the screen's existing data
                    system("CLS");
                    cout << Hour << " : " << Minutes << " : " << Seconds;
                    // tells if it is AM or PM
                    if (Hour > 11)
                    {
                        cout << " PM";
                    }
                    else
                    {
                        cout << " AM";
                    }
                    // adds a real time delay of 1 second
                    for (int i = 0; i < 999999999; i++)
                    {
                        i++;
                        i--;
                    }
                }
                Seconds = 0;
            }
            Minutes = 0;
        }
        Hour = 0;
    }
}

int main()
{
    int Hour = 0, Minutes = 0, Seconds = 0;
    cout << "Enter the Time in Format HH:MM:SS" << endl;
    cin >> Hour >> Minutes >> Seconds;
    // tells if the time is valid or not
    if (Hour < 24 && Minutes < 60 && Seconds < 60)
    {
        Time(Hour, Minutes, Seconds);
    }
    else
    {
        cout << "Enter the correct time in format HH:MM:SS" << endl;
    }

    return 0;
}
