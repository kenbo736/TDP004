#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;
// I denna fil läggs definitionerna (implementationen) av de funktioner
// som deklarerats i Time.h
struct times {
  int hh{};
  int mm{};
  int ss{};
};

void to_string(times); //function

int main(){
  times t1{2, 2, 3 + 5};
  times t2{};

  cout << setfill('0') << setw(2) << t1.hh << ":" << setfill('0') << setw(2) << t1.mm << ":" << setfill('0') << setw(2) << t1.ss << endl;

  to_string(t1);
  return 0;
}

void to_string(times t){
  if (t.hh<24 && t.mm<60 && t.ss<60){
    cout << "Test" << endl;
  }
}
