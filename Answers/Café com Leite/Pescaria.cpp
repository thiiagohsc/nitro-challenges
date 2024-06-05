#include <iostream>
using namespace std;

int main() {
  int np, vp;
  cin >> np >> vp;

  int total = np * vp;

  if(total >= 500 && total < 1800){
    cout << "Vara de Bambu" << endl;
  } else if(total >= 1800 && total < 7500){
    cout << "Vara de Fibra de Vidr" << endl;
  } else if(total >= 7500){
    cout << "Vara de Iridio" << endl;
  } else {
    cout << "Paciencia Firmino!" << endl;
  }
  return 0;
}