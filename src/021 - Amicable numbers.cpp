#include <iostream>
#include <cmath>

using namespace std;

int d(int n) {
	int sum = 0;

	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			sum += i;
		}
	}

	return sum;
}

int main() {
	int sum = 0;

	for(int a = 0; a < 10000; a++) {
		int b = d(a);

		if(a != b && a == d(b)) {
			sum += a;
		}
	}

	cout << sum << endl;
}
