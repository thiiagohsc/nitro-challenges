#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    for (int i = 0; i < N; ++i) {
        int X;
        cin >> X;
        sum += X;
        
    }

    cout << sum << endl;

    return 0;
}