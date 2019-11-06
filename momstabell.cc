#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float x;
  float y;
  float z;
  float b;

  cout << "INMATNINGSDEL" << endl;
  cout << "=============" << endl;
  cout << "Mata in första pris: TEST";
  cin >> x;
  cout << "Mata in sista pris: ";
  cin >> y;
  cout << "Mata steg längd: ";
  cin >> z;
  cout << "Mata in momsprocent: ";
  cin >> b;
  cout << endl;

  cout << "MOMSTABELLEN" << endl;
  cout << "============" << endl;
  cout << "Pris" << "\tMoms" << "\tPris med moms" << endl;
  cout << "-------------------------------" << endl;

  for(float i=x; i<y; i+=z) {
    cout << fixed << left << setprecision(2) << i << "\t" << (i/100)*b << "\t" << i+((i/100)*b) << endl;
  }

  return 0;
}
