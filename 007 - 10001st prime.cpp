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
    int prime = 0, answer;

    for(int i = 2; !answer; i++) {
        if(isPrime(i) == true) {
            prime++;

            if(prime == 10001)
                answer = i;
        }
    }

    cout << answer << endl;
}
