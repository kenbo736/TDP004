#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    ///Skriv in ett heltal
    int h;
    /*
    cout << "Skriv in ett heltal: ";
    cin >> h;
    cout << "Du skrev in heltalet: " << h << "\n" << flush;

    ///Skriv in fem heltal
    cout << "Skriv in fem heltal: ";
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
    */
    ///Skriv in ett flyttal
    double f;
    /*
    cout << "Skriv in ett flyttal: ";
    cin >> f;
    cout << "Du skrev in: flyttalet: " << setprecision(4) << f << "\n" << flush;
    */

    ///Skriv in ett heltal och ett flyttal
    /*
    cout << "Skriv in ett heltal och ett flyttal: ";
    cin >> h >> f;
    cout << "Du skrev in heltalet: " << setw(10) << h << "\n" << flush;
    cout << "Du skrev in Flyttalet: " << setw(9) << setprecision(4) << f << "\n" << flush;

    cout << "Skriv in ett flyttal och heltal: ";
    cin >> f >> h;
    cout << "Du skrev in heltalet: " << setfill('-') << setw(10) << h << "\n" << flush;
    cout << "Du skrev in Flyttalet: " << setfill('-') << setw(9) << setprecision(4) << f << "\n" << flush;
    */
    char c;
    /*
    cout << "Skriv in ett tecken: ";
    cin >> c;
    cout << "Du skrev in tecknet: " << c << "\n" << flush;
    */

    string s;
    cout << "Skriv in en sträng: ";
    cin >> s;
    cout << "Strängen '" << s << "' har " << s.length() << " tecken." << "\n" << flush;

    cout << "Skriv in ett heltal och en sträng: ";
    cin >> h >> s;
    cout << "Du skrev in talet |" << h << "| och strängen |" << s << "|. \n" << flush;

    cout << "Skriv in en sträng och ett flyttal: ";
    cin >> s >> f;
    cout << "Du skrev in '" << f << setprecision(3) << "' och '" << s << "'. \n" << flush;

    cout << "Skriv in hel rad med text: ";
    getline(cin, s);
    cout << "Du skrev in textraden: '" << s << "' \n" << flush;
    return 0;
}
