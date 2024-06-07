#include <iostream>
using namespace std;

int main() {
  float n1, n2, n3, n4;
  cin >> n1 >> n2 >> n3 >> n4;
  

  if(((n1+n2+n3+n4) / 4) >= 5.0){
    cout << "Parabens bruxao, eh nois que voa, voce passou!" << endl;
  } else {
    cout << "Voce nao passou, tente usar a varinha na proxima vez!" << endl;
  }
  return 0;
}