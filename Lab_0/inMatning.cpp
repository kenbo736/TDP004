#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    ///Skriv in ett heltal
    int h{};

    cout << "Skriv in ett heltal: " << endl;
    cin >> h;
    cin.ignore(999, '\n');
    cout << "Du skrev in heltalet: " << h << "\n" << flush;

    ///Skriv in fem heltal
    cout << "Skriv in fem heltal: " << endl;
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
    cin.ignore(999, '\n');
    ///Skriv in ett flyttal
    double f{};

    cout << "Skriv in ett flyttal: " << endl;
    cin >> f;
    cout << "Du skrev in: flyttalet: " << setprecision(3) << fixed << f << "\n" << flush;

    cin.ignore(999, '\n');
    ///Skriv in ett heltal och ett flyttal
    cout << "Skriv in ett heltal och ett flyttal: " << endl;
    cin >> h >> f;
    cout << "Du skrev in heltalet: " << setw(10) << h << "\n" << flush;
    cout << "Du skrev in Flyttalet: " << setw(9) << setprecision(4) << f << "\n" << flush;

    cin.ignore(999, '\n');
    cout << "Skriv in ett flyttal och heltal: " << endl;
    cin >> f >> h;
    cout << "Du skrev in heltalet: " << setfill('-') << setw(10) << h << "\n" << flush;
    cout << "Du skrev in Flyttalet: " << setfill('-') << setw(9) << setprecision(4) << f << "\n" << flush;
    cin.ignore(999, '\n');
    char c{};

    cout << "Skriv in ett tecken: " << endl;
    cin >> c;
    cout << "Du skrev in tecknet: " << c << "\n" << flush;
    cin.ignore(999, '\n');

    string s{};

    cout << "Skriv in en sträng: " << endl;
    cin >> s;
    cout << "Strängen '" << s << "' har " << s.length() << " tecken." << "\n" << flush;

    cout << "Skriv in ett heltal och en sträng: " << endl;
    cin >> h >> s;
    cout << "Du skrev in talet |" << h << "| och strängen |" << s << "|. \n" << flush;

    cin.ignore(999, '\n');
    cout << "Skriv in en sträng och ett flyttal: " << endl;
    cin >> s >> f;
    cout << "Du skrev in '" << f << setprecision(3) << "' och '" << s << "'. \n" << flush;

    cout << "Skriv in hel rad med text: " << endl;
    cin.ignore(999, '\n');
    getline(cin, s);
    cout << "Du skrev in textraden: '" << s << "' \n" << flush;

    cout << "Skriv in en textrad som slutar med ett negativt heltal: " << endl;


    cout << "Du skrev in textraden: '" << s << "' och heltalet '" << h << "'" << endl;
    return 0;
}
