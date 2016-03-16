#include <iostream>
#include <cmath>

#include "isPrime.hpp"

using namespace std;

int main() {
    long long unsigned int num = 600851475143, largest;

    int root = (int) sqrt(num) + 1;

    for(int i = 1; i < root; i++) {
        if(num % i == 0 && isPrime(i) == true)
            largest = i;
    }

    cout << largest << endl;
}
