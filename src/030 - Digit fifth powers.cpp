#include <iostream>
#include <cmath>
#define EXPONENT 5

using namespace std;

int main() {
    int domain = pow(10, 6);
    int sum = 0;

    for(int i = 2; i < domain; i++) {
        int n = i;
        int s = 0;

        while(n) {
            s += pow(n % 10, EXPONENT);
            n /= 10;
        }

        if(i == s)
            sum += s;
    }

    cout << sum << endl;
}
