#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
   float x,y;
   cin >> x >> y;
  
   cout << fixed << setprecision(2);
   cout << x + y << endl;

  return 0;
}