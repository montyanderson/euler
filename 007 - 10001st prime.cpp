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
