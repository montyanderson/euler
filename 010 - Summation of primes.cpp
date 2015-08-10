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
    long int sum;

    for(int i = 2; i < 2000000; i++) {
        if(isPrime(i) == true)
            sum += i;
    }

    cout << sum << endl;
}
