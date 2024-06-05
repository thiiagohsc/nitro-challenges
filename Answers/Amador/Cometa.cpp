#include <iostream>
using namespace std;

int main() {
  
  int a;
  cin >> a;
  int r = ((a-1986) % 76);
  int soma = 76 - r;

  cout << a + soma << endl;

  return 0;
}