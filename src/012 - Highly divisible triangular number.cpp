#include <iostream>
#include <cmath>

using namespace std;

int triangular(int term) {
    int sum = 0;

    for(int i = 1; i <= term; i++)
        sum += i;

    return sum;
}

int factors(int num) {
    int total = 0,
        root = (int) sqrt(num) + 1;

    for(int i = 1; i < root; i++) {
        if(num % i == 0)
            total += 2;
    }

    return total;
}

int main() {
    for(int i = 1; true; i++) {
        int num = triangular(i);

        if(factors(num) > 500) {
            cout << num << endl;
            return 0;
        }
    }
}
