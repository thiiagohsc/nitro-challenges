#include <iostream>
using namespace std;

int main() {
  float x;
  cin >> x;

  if (x >= 0){
    cout << x << endl;
  } else {
    cout << x * -1 << endl;
  }
  return 0;
}