#include <iostream>

using namespace std;

int main() {
    long int sum = 0,
        square = 0,
        max = 100;

    for(int i = 1; i <= max; i++) {
        sum += i * i;
        square += i;
    }

    square *= square;

    cout << square - sum << endl;
}
