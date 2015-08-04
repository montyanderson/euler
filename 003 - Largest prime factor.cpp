#include <iostream>

using namespace std;

bool isPrime(int prime) {
    for(int i = 2; i < prime; i++) {
        if(prime % i == 0)
            return false;
    }

    return true;
}

int main() {
    long long unsigned int num = 600851475143, largest;

    for(int i = 1; i < num; i++) {
        if(num % i == 0 && isPrime(i) == true)
            largest = i;
    }

    cout << largest << endl;
}
