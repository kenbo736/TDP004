// I denna fil läggs definitionerna (implementationen) av de funktioner
// som deklarerats i Time.h
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <unistd.h>
#include "Time.h"

using namespace std;

int main(){
  times t1{};
  times t2{};

  to_string(t1);
  to_string(t2);
  return 0;
}

void to_string(times t){
  if (t.hh<24 && t.mm<60 && t.ss<60){
    cout << setfill('0') << setw(2) << t.hh << ":" << setfill('0') << setw(2) << t.mm << ":" << setfill('0') << setw(2) << t.ss << endl;
  }
}

/*
if (t.hh<24 && t.mm<60 && t.ss<60){
  for(int h = 0; h < 24; h++){
    for(int m = 0; m < 60; m++){
      for(int s = 0; s < 60; s++){
        cout << setfill('0') << setw(2) << t.hh+h << ":" << setfill('0') << setw(2) << t.mm+m << ":" << setfill('0') << setw(2) << t.ss+s << endl;
        usleep(1000);
      }
    }
  }
}
*/
