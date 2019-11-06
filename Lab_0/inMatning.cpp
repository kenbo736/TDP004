#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    ///Skriv in ett heltal
    int h;
    cout << "Skriv in ett heltal: ";
    cin >> h;
    cout << "Du skrev in heltalet: " << h << "\n" << flush;

    ///Skriv in fem heltal
    cout << "Skriv in fem heltal: ";
    ///cout << "Du skrev in heltalen: " << "\n" << flush;
    for(int i{0}; i<5; ++i)
    {
        cin >> h;
        if(i == 0)
        { 
         cout << "Du skrev ut talen: " << h << ", ";
        }
        else if(i == 4)
        {
         cout << h << endl;
        }
        else
        {
         cout << h << ", ";
        }
    } 
    return 0;
}