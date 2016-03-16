#include <iostream>
#include <cmath>

#include "isPrime.hpp"

using namespace std;

int main() {
    long int sum = 0;

    for(int i = 2; i < 2000000; i++) {
        if(isPrime(i) == true)
            sum += i;
    }

    cout << sum << endl;
}
