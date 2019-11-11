#include <iostream>
#include <iomanip>
using namespace std;

void momstabell(double i, double i2, double i3, double i4)
{
  cout << "\nMOMSTABELL" << endl;
  cout << "==========" << endl;
  cout << setw(10) << "Pris" << setw(10) << "Moms" << setw(20) << "Pris med moms" << endl;
  cout << setw(10) << setfill('-') << fixed << endl;
}

int main()
{
  double fp{};
  double sp{};
  double steg{};
  double moms{};
  cout << "INMATNINGSDEL" << endl;
  cout << "=============" << endl;
  cout << "Mata in första pris: " << endl;
  cin >> fp;
  cout << "Mata in sista pris: " << endl;
  cin >> sp;
  cout << "Mata in steglängd: " << endl;
  cin >> steg;
  cout << "Mata in momsprocent" <<  endl;
  cin >> moms;

  momstabell(fp, sp, steg, moms);
  return 0;
}
