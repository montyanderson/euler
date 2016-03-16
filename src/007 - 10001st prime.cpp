#include <iostream>
#include <cmath>

#include "isPrime.hpp"

using namespace std;

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
