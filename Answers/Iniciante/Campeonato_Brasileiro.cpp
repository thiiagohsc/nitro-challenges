#include <iostream>
using namespace std;

int main() {
  int cv, ce, cs, fv, fe, fs;
  cin >> cv >> ce >> cs >> fv >> fe >> fs;

  int totalC = (cv * 3) + ce;
  int totalF = (fv * 3) + fe;

  if(totalC > totalF){
      cout << "C" << endl;
  } else if(totalF > totalC) {
      cout << "F" << endl;
  } else if(totalC == totalF && cs > fs){
      cout << "C" << endl;
  } else if(totalC == totalF && cs < fs){
      cout << "F" << endl;
  } else {
      cout << "=" << endl;
  }
  return 0;
}