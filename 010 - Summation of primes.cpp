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
    long int sum;

    for(int i = 2; i < 2000000; i++) {
        if(isPrime(i) == true)
            sum += i;
            cout << i << endl;
    }

    cout << sum << endl;
}
