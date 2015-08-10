#include <iostream>
#include <ttmath/ttmath.h>

using namespace std;

int main() {
    ttmath::UInt<100> num = 1;
    ttmath::UInt<100> sum = 0;

    for(int i = 0; i < 1000; i++)
        num *= 2;

    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }

    cout << sum << endl;
}
