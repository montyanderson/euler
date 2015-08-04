#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int prime) {
    int root = (int) sqrt(prime) + 1;

    for(int i = 2; i < root; i++) {
        if(prime % i == 0)
            return false;
    }

    return true;
}

int main() {
    long int sum;

    for(int i = 2; i < 2000000; i++) {
        if(isPrime(i) == true)
            sum += i;
    }

    cout << sum << endl;
}
