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
