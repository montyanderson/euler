#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    int root = (int) sqrt(num) + 1;

    if(num <= 1)
        return false;

    for(int i = 2; i < root; i++) {
        if(num % i == 0)
            return false;
    }

    return true;
}

int main() {
    long long unsigned int num = 600851475143, largest;

    int root = (int) sqrt(num) + 1;

    for(int i = 1; i < root; i++) {
        if(num % i == 0 && isPrime(i) == true)
            largest = i;
    }

    cout << largest << endl;
}
