#include <iostream>

#include "isPrime.hpp"

using namespace std;

bool Goldbach(int n) {
	for(int p = 1; p < n; p++) {
		if(isPrime(p)) {
			for(int a = 1; 2 * a * a <= n - p; a++) {
				if(p + (2 * a * a) == n) {
					return true;
				}
			}
		}
	}

	return false;
}

int main() {
	for(int i = 3; i < 100000; i++, i++) {
		if(!isPrime(i) && !Goldbach(i)) {
			cout << i << endl;
			return 0;
		}
	}
};
