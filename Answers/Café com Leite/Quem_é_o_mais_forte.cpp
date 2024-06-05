#include <iostream>
using namespace std;

int main() {
  int lux;
  int ekko;
  cin >> lux >> ekko;

  if(lux > ekko){
    cout << lux << endl;
    cout << "Lux" << endl;
  } else if(ekko > lux){
    cout << ekko <<  endl;
    cout << "Ekko" <<  endl;
  } else {
    cout << lux << endl;
    cout << "Os dois tem a mesma quantidade de poder" << endl;
  }
  return 0;
}