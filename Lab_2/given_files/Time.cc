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
  times t1{12, 12, 12};
  times t2{24, 12, 12};

  //giltig(t1);
  //giltig(t2);
  formatering(t1);
  formatering(t2);
  return 0;
}

void giltig(times t){
  if (t.hh<24 && t.mm<60 && t.ss<60){
    cout << setfill('0') << setw(2) << t.hh << ":" << setfill('0') << setw(2) << t.mm << ":" << setfill('0') << setw(2) << t.ss << endl;
  }
}

int formatering(times t){
  //cout << setfill('0') << setw(2) << t.hh << ":" << setfill('0') << setw(2) << t.mm << ":" << setfill('0') << setw(2) << t.ss << endl;
  if (t.hh<13 && t.mm<60 && t.ss<60){ //PM
    cout << setfill('0') << setw(2) << t.hh << ":" << setfill('0') << setw(2) << t.mm << ":" << setfill('0') << setw(2) << t.ss << " AM" << endl;
  }
  else if(t.hh>12 && t.mm<60 && t.ss<60){
    cout << setfill('0') << setw(2) << t.hh-12 << ":" << setfill('0') << setw(2) << t.mm << ":" << setfill('0') << setw(2) << t.ss << " PM" << endl;
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
