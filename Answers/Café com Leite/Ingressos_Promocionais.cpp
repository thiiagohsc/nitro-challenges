#include <iostream>
using namespace std;

int main() {
  string tipo;
  cin >> tipo;

  if(tipo == "idoso"){
    cout << "gratuidade" << endl;
  } else if(tipo == "estudante"){
    cout << "10 reais" << endl;
  } else if(tipo == "casadinha"){
    cout << "30 reais" << endl;
  } else if(tipo == "trio"){
    cout << "40 reais" << endl;
  } else if(tipo == "outros") {
    cout << "20 reais" << endl;
  }
  return 0; 
}